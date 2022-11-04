/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListenSocket.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:49:52 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:49:53 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Socket;

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sstream>
#include <fcntl.h>
#include "Socket.hpp"

class ListenSocket : public Socket
{
	private:
		sockaddr_in	_sockaddr;

		ListenSocket();
		ListenSocket(const ListenSocket& copy);
		ListenSocket	&operator=(const ListenSocket& other);

		void					createSocket();
		void					bindSocket();
		void					listenSocket();
	public:
		ListenSocket(int port);
		virtual ~ListenSocket();

		int						grabConnection();

		bool					operator==(int fd);
};
