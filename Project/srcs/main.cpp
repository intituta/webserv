/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:46 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:47 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Webserver.hpp"
#include "Config.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw std::invalid_argument("Usage: ./webserv <config>");

		Config conf(argv[1]);

		Webserver		server(conf);

		server.run();
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch(const char *err)
	{
		std::cout << err << std::endl;
	}
}