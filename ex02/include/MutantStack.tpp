/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:54:14 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 17:19:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T, typename Container> 
MutantStack<T, Container>::MutantStack(void): std::stack<T, Container>() {
    // std::cout << "Default constuctor called" << std::endl;    
};

template <typename T, typename Container> 
MutantStack<T, Container>::MutantStack(MutantStack const &mutantstack): std::stack<T, Container>(mutantstack) {
    // std::cout << "Copy constuctor called" << std::endl;    
};

template <typename T, typename Container> 
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &mutantstack) {
    // std::cout << "Assignement constuctor called" << std::endl;    
    if(this != &mutantstack) {
        this->c.clear();
        this->c = mutantstack.c;
    }
    return (*this);
};

template <typename T, typename Container> 
MutantStack<T, Container>::~MutantStack(void) {
    // std::cout << "Destuctor called" << std::endl;
};


template <typename T, typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
    return this->c.begin();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
    return this->c.end();
};
