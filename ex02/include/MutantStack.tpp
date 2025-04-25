/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:54:14 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 10:07:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T> 
MutantStack<T>::MutantStack(void): std::stack<T>() {
    std::cout << "Default constuctor called" << std::endl;    
};
        
template <typename T> 
MutantStack<T>::~MutantStack(void) {
    std::cout << "Destuctor called" << std::endl;
};
