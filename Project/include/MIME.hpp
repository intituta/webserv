/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MIME.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:49:59 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:00 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <map>
#include <string>

class MIME
{
	private:
		MIME();
		MIME(const MIME& copy);
		MIME	&operator=(const MIME& other);
		virtual ~MIME();
	public:
		static const std::map<std::string, std::vector<std::string> >	_types;
		static const std::map<std::string, std::vector<std::string> >	createMap();

		static const std::string	&getType(const std::string &extension);
};
