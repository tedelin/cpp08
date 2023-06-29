/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:57:17 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/29 14:44:57 by tedelin          ###   ########.fr       */
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
        MutantStack(const MutantStack& cpy) {std::stack<T>::operator=(cpy);};
        MutantStack& operator=(const MutantStack& rhs) {std::stack<T>::operator=(rhs); return (*this);};
        virtual ~MutantStack() {};

        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		
        iterator begin() {return (std::stack<T>::c.begin());};
        iterator end() {return (std::stack<T>::c.end());};

        reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());};
        reverse_iterator rend() {return (std::stack<T>::c.rend());};
};

#endif