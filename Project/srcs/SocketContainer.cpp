/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SocketContainer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:51:09 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:51:10 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SocketContainer.hpp"

SocketContainer::SocketContainer()
{}

SocketContainer::~SocketContainer()
{
	for (size_t i = 0; i < _sockets.size(); ++i)
		delete _sockets[i];
}

void		SocketContainer::add(Socket *socket)
{
	struct pollfd	pfd;
	pfd.fd = socket->getSockFd();
	pfd.events = POLLIN;
	pfd.revents = 0;
	_pollfds.push_back(pfd);
	_sockets.push_back(socket);
}

void		SocketContainer::remove(size_t idx)
{
	close(_sockets[idx]->getSockFd());
	delete _sockets[idx];
	_sockets.erase(_sockets.begin() + idx);
	_pollfds.erase(_pollfds.begin() + idx);
}

std::vector<Socket *>		&SocketContainer::getSockets()
{
	return _sockets;
}

std::vector<struct pollfd>	&SocketContainer::getPollfds()
{
	return _pollfds;
}

size_t						SocketContainer::size() const
{
	return _sockets.size();
}

sockdata					SocketContainer::operator[](size_t n)
{
	return sockdata(_sockets[n], &(_pollfds[n]));
}
