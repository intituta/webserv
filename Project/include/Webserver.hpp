/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Webserver.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:32 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:33 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Config;
class Server;
class ListenSocket;
class UserSocket;
class SocketContainer;

#include <vector>
#include <poll.h>
#include <csignal>
#include "Server.hpp"
#include "Config.hpp"
#include "ListenSocket.hpp"
#include "UserSocket.hpp"
#include "SocketContainer.hpp"
#include "Response.hpp"

class Webserver
{
	private:
		std::vector<Server *>		_servers;
		SocketContainer				_sockets;
		const id_t					_timeout;

		Webserver();
		Webserver(const Webserver& copy);
		Webserver	&operator=(const Webserver& other);

		Server						*defineServer(const std::string &msg, int port);
	public:
		Webserver(const Config &config);
		virtual ~Webserver();


		void						run();
};