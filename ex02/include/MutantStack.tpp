/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:54:14 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/26 09:43:42 by nrobinso         ###   ########.fr       */
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
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& mutantstack) {
    // std::cout << "Assignment operator called" << std::endl;    
    if (this != &mutantstack) {
        this->c = mutantstack.c; // Directly assign the container
    }
    return *this;
};

template <typename T, typename Container> 
MutantStack<T, Container>::~MutantStack(void) {
    // std::cout << "Destuctor called" << std::endl;
};

// iterators, const_iterators and reverse_iterators

template <typename T, typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
    return this->c.begin();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
    return this->c.end();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
    return this->c.begin();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
    return this->c.end();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin() {
    return this->c.rbegin();
};

template <typename T, typename Container> 
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend() {
    return this->c.rend();
};
