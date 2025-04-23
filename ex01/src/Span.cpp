/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:53:44 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 18:50:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


Span::Span(void) :max_(0), used_(0) {
    std::cout << "Default span constructor Called" << std::endl;
};

Span::Span(unsigned int number):max_(number), used_(0) {
    std::cout << "Span constructor Called" << std::endl;
    if (number < 1 || number > UINT_MAX)
        throw std::out_of_range("Span(number) out of range");
    try {
        this->number_.reserve(number);
        std::cout << "Created memory reserve: " << number << std::endl;
    }
    catch(...) {
        std::cout << "Alocation memory failed" << std::endl;
    }
};

Span::Span(const Span &span):max_(0), used_(0){
    std::cout << "Copy constructor Span Called" << std::endl;
    *this = span;
};

Span &Span::operator=(const Span &span){
    std::cout << "Assignement Span Called" << std::endl;
    if (this != &span) {
        for (unsigned int i = 0; i < this->used_; i++) {
            this->number_[i] = span.number_[i];
        }
        for (unsigned int i = this->used_; i < span.used_; i++) {
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
    
    if((span.used_ < 1) || (nbr >= span.used_))
        throw std::out_of_range("SpanPrint() out of initialised scope");
    std::cout << span.number_[nbr] << std::endl;

};


void Span::addNumber(unsigned int number) {

    std::cout << "addNumber(" << number << ") called " << this->used_ << std::endl;
    if (this->used_ < this->max_) {
        this->number_.push_back(number);
        this->used_ += 1; 
    }
    else
        throw std::out_of_range("addNumber() out of initialised scope");
    
};

