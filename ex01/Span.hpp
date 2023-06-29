/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:40 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/29 10:42:10 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span {
    public:
        Span(unsigned int n);
        Span(const Span& cpy);
        ~Span();

        Span & operator=(const Span& rhs);

        void    addNumber(int n);
        void    addRange(std::vector<int> newNb);
        int     shortestSpan();
        int     longestSpan();

        class MaxCapacityException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("Error : span reach maximum capacity");
                }
        };
        class ToSmallSpanException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("Error : span must contain at least two numbers");
                }
        };

    private:
        Span();
        
        unsigned int _size;
        std::vector<int> _container;
};

#endif