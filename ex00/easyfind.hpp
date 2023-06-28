/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:30 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/27 16:13:17 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception> 
# include <array>
# include <list>
# include <deque>
# include <vector>
# include <forward_list>

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
    for (typename T::iterator it = container.begin(); it != container.end(); it++) {
        if (*it == second) {
            std::cout << "Element found" << std::endl;
            return ;
        }
    }
    throw EltNotFoundException();
}

#endif