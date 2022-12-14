/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:51:01 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:51:02 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

Server::Server(ServerConfig &config) :
_config(&config)
{
	for (size_t i = 0; i < _config->getListens().size(); i++)
		_ports.insert(_config->getListens()[i].port);
}

Server::~Server()
{}

bool	Server::isListen(unsigned int port) const
{
	if (_ports.find(port) != _ports.end())
		return true;
	return false;
}

bool	Server::containsName(const std::string &name)
{
	for (size_t i = 0; i < _config->getNames().size(); i++)
		if (_config->getNames()[i] == name)
			return true;
	return false;
}

const std::set<int>		&Server::getPorts() const
{
	return _ports;
}

Location		*Server::getLocation(const std::string &path)
{
	size_t	maxSize = 0;
	Location	*res = _config;
	std::map<std::string, Location *>::const_iterator	it = _config->getLocations().begin();
	for (; it != _config->getLocations().end(); ++it)
	{
		int	t = (it->first.size() > 1 && it->first[it->first.size() - 1] == '/');
		if (!it->first.compare(0, it->first.length() - t, path, 0, it->first.length() - t))
		{
			if (it->first.length() > maxSize)
			{
				maxSize = it->first.length();
				res = it->second;
			}
		}
	}
	return res;
}
