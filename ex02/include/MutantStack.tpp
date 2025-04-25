/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:54:14 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 11:51:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T> 
MutantStack<T>::MutantStack(void): std::stack<T>() {
    std::cout << "Default constuctor called" << std::endl;    
};

template <typename T> 
MutantStack<T>::MutantStack(MutantStack &mutantstack): std::stack<T>(mutantstack) {
    std::cout << "Copy constuctor called" << std::endl;    
    
};

template <typename T> 
MutantStack<T> &MutantStack<T>::operator=(MutantStack &mutantstack) {
    if(this != &mutantstack) {
        this->c = mutantstack.c;
    }
    return (*this);
};


        
template <typename T> 
MutantStack<T>::~MutantStack(void) {
    std::cout << "Destuctor called" << std::endl;
};
