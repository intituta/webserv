/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:49:49 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:49:50 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ServerConfig;

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "utils.hpp"
#include "ServerConfig.hpp"

class Config
{
	private:
		std::vector<ServerConfig *>	_servers;

		std::string	getServer(std::string &config);

		Config();
		Config(const Config& copy);
		Config	&operator=(const Config& other);
	public:
		Config(const char *path);
		virtual ~Config();
		const std::vector<ServerConfig *>	getServers() const;
};
