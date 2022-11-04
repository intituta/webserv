/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:11 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:12 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Request.hpp"
#include <dirent.h>
#include <string.h>
#include <fstream>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <iomanip>
#include "Server.hpp"
#include "Color.hpp"
#include <cstdio>
#include "utils.hpp"
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
class Response : public Request {

	private:
		bool						_conectionClose;
		const std::string 			_directoryListingDefult;
		std::string					_oldPath;
		
		std::string autoIndexOn( void );

		void autoIndexOff(struct stat &);
		
		void responsePost( void );

		void responseGet ( void );
		
		void responseDelete( void );

		void cgi( void );

		Response();

		Response(const Response &);

		Response & operator=(const Response &);

	public:
		Response(const std::string & request, Server * server);

		bool 		getConectionClose( void );
		std::string getResponse( void );

		~Response();
};