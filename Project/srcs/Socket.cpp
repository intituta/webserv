/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Socket.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:51:06 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:51:07 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Socket.hpp"

Socket::Socket()
{}

Socket::~Socket()
{}

int		Socket::getSockFd() const
{
	return _fd;
}

int		Socket::getPort() const
{
	return _port;
}

void	Socket::setNonblock()
{
	fcntl(_fd, F_SETFL, O_NONBLOCK);
}
