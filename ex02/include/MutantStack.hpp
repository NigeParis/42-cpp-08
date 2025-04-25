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

template <typename T> 

class MutantStack: public std::stack<T> {


    public:

        MutantStack(void);
        MutantStack(MutantStack &mutantstack);
        MutantStack &operator=(MutantStack &mutantstack);
        ~MutantStack(void);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();

};

#include "MutantStack.tpp"

