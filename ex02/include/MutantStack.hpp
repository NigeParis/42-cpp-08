/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:40:20 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/24 17:29:25 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <list>

template <typename T, typename Container = std::deque<T> > 
class MutantStack: public std::stack<T, Container> {

    public:

        MutantStack(void);
        MutantStack(MutantStack const &mutantstack);
        MutantStack &operator=(MutantStack const &mutantstack);
        virtual ~MutantStack(void);
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;
        reverse_iterator rbegin();
        reverse_iterator rend();

    private:

};
#include "MutantStack.tpp"
