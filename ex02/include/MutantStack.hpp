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

template <typename T, typename Container = std::deque<T> > 

class MutantStack: public std::stack<T, Container> {


    public:

        MutantStack(void);
        MutantStack(MutantStack const &mutantstack);
        MutantStack &operator=(MutantStack const &mutantstack);
        ~MutantStack(void);

        typedef typename Container::iterator iterator;
        iterator begin();
        iterator end();

};

#include "MutantStack.tpp"

