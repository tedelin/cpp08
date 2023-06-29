/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:56:42 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/29 13:32:53 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(0) {
    _container.reserve(n);
    // std::cout << "capa  : " << _container.capacity() << std::endl;
}

Span::Span(const Span& cpy) {
    this->_container = cpy._container;
    this->_size = cpy._size;
}


Span&   Span::operator=(const Span& rhs) {
    if (this != &rhs)
    {
        this->_container = rhs._container;
        this->_size = rhs._size;
    }
    return (*this);
}

void    Span::addNumber(int n) {
    if (_size == _container.capacity())
        throw MaxCapacityException();
    else
    {
        _size++;
        _container.push_back(n);
    }
}

void    Span::addRange(std::vector<int> newNb)
{
    if (_size + newNb.size() > _container.capacity())
        throw MaxCapacityException();
    _container.insert(_container.end(), newNb.begin(), newNb.end());
    _size += newNb.size();
}

int Span::longestSpan() {
    if (_size == 0 || _size == 1)
        throw ToSmallSpanException();
    else
    {
        std::sort (_container.begin(), _container.end());
        return (_container.back() -_container.front());
    }
}

int Span::shortestSpan() {
    if (_size == 0 || _size == 1)
        throw ToSmallSpanException();
    else
    {
        std::sort (_container.begin(), _container.end());
        int shortest = _container[_container.size() - 1] - _container[_container.size() - 2];
        for (unsigned int i = _container.size() - 1; i > 0; i--) {
            if (_container[i] - _container[i -1] < shortest) {
                shortest = _container[i] - _container[i -1];
            }
        }
        return (shortest);
    }
}

Span::~Span() {}