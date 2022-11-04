/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:13 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:14 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ServerConfig;

#include <vector>
#include <set>
#include "ServerConfig.hpp"
#include "t_listen.hpp"

class Server
{
	private:
		ServerConfig			*_config;
		std::set<int>			_ports;

		Server();
		Server(const Server& copy);
		Server	&operator=(const Server& other);
	public:
		Server(ServerConfig &config);
		~Server();

		bool					isListen(unsigned int port) const;
		bool					containsName(const std::string &name);
		const std::set<int>		&getPorts() const;
		Location				*getLocation(const std::string &path);
};
