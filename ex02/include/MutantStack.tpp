/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:54:14 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 14:15:57 by nrobinso         ###   ########.fr       */
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
    std::cout << "Assignement constuctor called" << std::endl;    
    if(this != &mutantstack) {
        this->c.clear();
        this->c = mutantstack.c;
    }
    return (*this);
};


        
template <typename T> 
MutantStack<T>::~MutantStack(void) {
    std::cout << "Destuctor called" << std::endl;
};


template <typename T> 
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
};

template <typename T> 
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
};
