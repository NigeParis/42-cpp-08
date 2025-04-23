/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:53:44 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 16:01:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


Span::Span(void) :max_(0), used_(0) {
    std::cout << "Default span constructor Called" << std::endl;
    
};

Span::Span(unsigned int number):max_(number), used_(0) {
    std::cout << "Span constructor Called" << std::endl;
    if (number < 1)
        return;
    for (unsigned int i = 0; i < max_; i++) {
        if (i == 0)
            number_.push_back(4);
        else if (i == 3)
            number_.push_back(8);
        else
            number_.push_back(0);
        std::cout << "i = " << i <<  " number: " << number_[i]<< std::endl;
    }
};

Span::Span(const Span &span):max_(0), used_(0){
    std::cout << "Copy constructor Span Called" << std::endl;
    *this = span;
};

Span &Span::operator=(const Span &span){
    std::cout << "Assignement Span Called" << std::endl;
    if (this != &span) {
        for (unsigned int i = 0; i < this->max_; i++) {
            this->number_[i] = span.number_[i];
        }
        for (unsigned int i = this->max_; i < span.max_; i++) {
            this->number_.push_back(span.number_[i]);
        }
        this->max_ = span.max_;
        this->used_ = span.used_;
    }
    return (*this);
};

Span::~Span(void){
    std::cout << "Delete Span Called" << std::endl;
};


void Span::SpanPrint(const Span &span, unsigned int nbr) {
    
    if(span.max_ < 1)
        return ;
    if (nbr > span.max_)
        std::cout << "Out of range" << std::endl;
    else
        std::cout << span.number_[nbr] << std::endl;
    
};
