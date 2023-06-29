/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:36 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/29 13:32:50 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // try {
    //     Span sp = Span(5);
    //     std::vector<int> numbers;
    //     numbers.push_back(42);
    //     numbers.push_back(43);
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     // sp.addNumber(11);
    //     sp.addRange(numbers);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    try {
        Span sp = Span(10000);
        for (int i = 0; i < 10000; i++)
            sp.addNumber(i);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}