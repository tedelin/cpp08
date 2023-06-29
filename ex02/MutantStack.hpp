/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:57:17 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/29 12:39:21 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        MutantStack(const MutantStack& cpy) {(void) cpy;};
        MutantStack& operator=(const MutantStack& rhs) {(void) rhs;};
        virtual ~MutantStack() {};

        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

        iterator begin() {return (std::stack<T>::c.begin());};
        iterator end() {return (std::stack<T>::c.end());};

        reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());};
        reverse_iterator rend() {return (std::stack<T>::c.rend());};

        const_iterator  cbegin() {return (std::stack<T>::c.cbegin());};
        const_iterator  cend() {return (std::stack<T>::c.cend());};

        const_reverse_iterator crbegin() {return (std::stack<T>::c.begin());};
        const_reverse_iterator crend() {return (std::stack<T>::c.end());};
};

#endif