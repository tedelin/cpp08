/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:32 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/30 10:55:38 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    try {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
		std::cout << "------" << std::endl;
        easyfind(v, 3);
		std::cout << "------" << std::endl;
        // easyfind(v, 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        easyfind(l, 2);
        easyfind(l, 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::deque<int> d;
        d.push_back(1);
        d.push_back(2);
        d.push_back(3);
        easyfind(d, 2);
        easyfind(d, 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}