/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:51:27 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:51:28 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


  #include <unistd.h>
  #include <fstream>
  #include <iostream>
int main(int iiii, char **ahh, char **vhh)
{
    static char buff[10]; 
    read(0, buff, 9);
    buff[0] = '4';
    write(1, buff, 9);

}