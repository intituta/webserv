/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_listen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:24 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:25 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

typedef struct s_listen
{
	unsigned int	inaddr;
	unsigned int	port;
	s_listen(unsigned int addr, unsigned int port)
	: inaddr(addr), port(port)
	{}
}t_listen;
