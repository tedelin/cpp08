/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:32 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/27 16:12:55 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    try {
        std::array<int, 3> a = {1, 2, 3};
        easyfind(a, 2);
        easyfind(a, 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        easyfind(v, 2);
        easyfind(v, 4);
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
    try {
        std::forward_list<int> fl;
        fl.push_front(1);
        fl.push_front(2);
        fl.push_front(3);
        easyfind(fl, 2);
        easyfind(fl, 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}