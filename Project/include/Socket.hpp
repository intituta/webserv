/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Socket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:19 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:20 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fcntl.h>

class Socket
{
	protected:
		int			_fd;
		int			_port;
	private:
		Socket(const Socket& copy);
		Socket	&operator=(const Socket& other);
	public:
		Socket();
		virtual ~Socket();

		int						getSockFd() const;
		int						getPort() const;
		void					setNonblock();
};
