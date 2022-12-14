/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Webserver.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:51:17 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:51:18 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Webserver.hpp"

bool	work = true;

void	sigHandler(int signum)
{
	(void)signum;
	work = false;
}

Webserver::Webserver(const Config &config) :
_timeout(1)
{
	std::set<int>	ports;
	for (size_t i = 0; i < config.getServers().size(); ++i)
		_servers.push_back(new Server(*(config.getServers()[i])));
	for (size_t i = 0; i < _servers.size(); ++i)
		ports.insert(_servers[i]->getPorts().begin(), _servers[i]->getPorts().end());
	std::set<int>::iterator	it = ports.begin();
	for (; it != ports.end(); ++it)
		_sockets.add(new ListenSocket(*it));
}

Webserver::~Webserver()
{
	for (size_t i = 0; i < _servers.size(); ++i)
		delete _servers[i];
}

Server	*Webserver::defineServer(const std::string &msg, int port)
{
	size_t	pos;
	if ((pos = msg.find("Host: ")) == std::string::npos)
		return _servers[0];
	std::istringstream	ss(msg.substr(pos));
	std::string		host;
	ss >> host >> host;
	std::vector<Server *>	candidates;
	for (size_t i = 0; i < _servers.size(); i++)
		if (_servers[i]->isListen(port))
			candidates.push_back(_servers[i]);
	for (size_t i = 0; i < candidates.size(); i++)
		if (candidates[i]->containsName(host))
			return candidates[i];
	return candidates[0];
}

void	Webserver::run()
{
	signal(SIGINT, sigHandler);
	while (work)
	{
		int	pret = poll(_sockets.getPollfds().data(), _sockets.getPollfds().size(), _timeout);
		if (pret != 0)
		{
			for (size_t i = 0; i < _sockets.size(); ++i)
			{
				if (_sockets[i].pollfd->revents & POLLIN)
				{
					if (ListenSocket *lis = dynamic_cast<ListenSocket*>(_sockets[i].socket))
					{
						_sockets.add(new UserSocket(lis->grabConnection(), lis->getPort()));
						break;
					}
					UserSocket	*user = dynamic_cast<UserSocket*>(_sockets[i].socket);
					if (!user->readMessage())
					{
						_sockets.remove(i);
						--i;
						continue ;
					}
					try
					{
						while (user->readyToResponse())
						{
							std::string	msg = user->popMessage();
							std::cout << GREEN <<  msg << RESET << std::endl;
							Server	*s = defineServer(msg, _sockets[i].socket->getPort());
							Response response_user(msg, s);
							std::string	resp = response_user.getResponse();
							std::cout << ORANGE << resp.substr(0, resp.find("\n\n")) << RESET << std::endl << std::endl << std::endl;
							send(user->getSockFd(), resp.c_str(), resp.size(), 0);
							if (response_user.getConectionClose()) {
								_sockets.remove(i);
								--i;
								break ;
							}
						}
					}
					catch (const char *e)
					{
							std::cout << e << std::endl;
					}
					catch(const std::exception& e)
					{
							std::cout << e.what() << std::endl;
					}
				}
				_sockets[i].pollfd->revents = 0;
			}
		}
	}
}
