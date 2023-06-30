/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:30 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/30 11:08:09 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception> 
# include <algorithm>
# include <list>
# include <deque>
# include <vector>

class EltNotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw() {
            return ("Element not found");
        }
};

template <typename T>
void    easyfind(T& container, int second)
{
   if (std::find(container.begin(), container.end(), second) != container.end())
		std::cout << "Element found" << std::endl;
	else
    	throw EltNotFoundException();
}

#endif