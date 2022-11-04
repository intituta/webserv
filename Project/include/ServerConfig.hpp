/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ServerConfig.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:17 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <string>
#include <sstream>
#include "Location.hpp"
#include "t_listen.hpp"

class ServerConfig : public Location
{
	private:
		std::vector<t_listen>					_listens;
		std::vector<std::string>				_names;
		std::map<std::string, Location *>		_locations;

		ServerConfig();
		ServerConfig(const ServerConfig& copy);
		ServerConfig	&operator=(const ServerConfig& other);
	public:
		ServerConfig(const std::string &config);
		virtual ~ServerConfig();

		const std::vector<t_listen>				&getListens() const;
		const std::vector<std::string>			&getNames() const;
		const std::map<std::string, Location *>	&getLocations() const;
};
