/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:40 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/27 16:24:17 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>

class Span {
    public:
        Span(unsigned int n);
        Span(const Span& cpy);
        ~Span();

        Span & operator=(const Span& rhs);

        void    addNumber(int n);

        class MaxException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("Maximum capacity");
                }
        };

    private:
        unsigned int _max;
};

#endif