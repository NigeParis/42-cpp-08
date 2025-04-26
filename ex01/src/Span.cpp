/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:53:44 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/26 09:45:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(void) :max_(0), used_(0) {
    //std::cout << "Default span constructor Called" << std::endl;
};

Span::Span(unsigned int N):max_(N), used_(0) {
    // std::cout << "Span constructor Called" << std::endl;
    if (N < 1 || N > UINT_MAX)
        throw std::out_of_range("Span(number) out of range");
    try {
        this->number_.reserve(N);
        this->max_ = N;
        //std::cout << "Created memory reserve: " << number << std::endl;
    }
    catch(...) {
        // std::cout << "Alocation memory failed" << std::endl;
        throw std::runtime_error("Alocation memory failed");
    }
};

Span::Span(const Span &span):max_(0), used_(0){
    //std::cout << "Copy constructor Span Called" << std::endl;
    *this = span;
};

Span &Span::operator=(const Span &span){
    //std::cout << "Assignement Span Called" << std::endl;
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
    //std::cout << "Delete Span Called" << std::endl;
};

void Span::addNumber(unsigned int number) {
    
    //std::cout << "addNumber(" << number << ") called " << this->used_ << std::endl;
    if (this->used_ < this->max_) {
        this->number_.push_back(number);
        this->used_ += 1; 
    }
    else
    throw std::out_of_range("addNumber() out of initialised scope");
    
};

unsigned int Span::longestSpan(void) {
    
    unsigned int smallest = UINT_MAX;
    unsigned int biggest = 0;
    unsigned int longestspan = 0;
    unsigned int size = this->number_.size();
    if (size < 2)
    throw std::runtime_error("Error: no span can be found");
    for (unsigned int i = 0; i < size; i++) {
        if (this->number_[i] < smallest)
        smallest = this->number_[i];
        if (this->number_[i] > biggest)
        biggest = this->number_[i];
    }
    longestspan = biggest - smallest; 
    
    return(longestspan);
};

unsigned int Span::shortestSpan(void) {
    
    unsigned int lastshortestspan = UINT_MAX;
    unsigned int size = this->number_.size();
    if (size < 2) {
        throw std::runtime_error("Error: no span can be found");
    }
    std::vector<unsigned int> sortedNumbers = this->number_;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    for (unsigned int i = 1; i < size; i++) {
        unsigned int shortestspan = sortedNumbers[i] - sortedNumbers[i - 1];
        if (shortestspan < lastshortestspan) {
            lastshortestspan = shortestspan;
        }
    }
    return lastshortestspan;
}

Span::Span(unsigned int number, unsigned int startRange, unsigned int endRange) {

    srand(static_cast<unsigned int>(time(0)));
    unsigned int count = 0;
    if (number < 1 || number > UINT_MAX)
        throw std::out_of_range("Span(number) out of range");
    try {
        this->number_.reserve(number);
        this->used_ = 0;
    }
    catch(...) {
        throw std::runtime_error("Alocation memory failed");
    }
    for(unsigned int i = 0; i < number; i++) {
        
        if (count < number) {
            this->number_.push_back(startRange + (rand() % (endRange - startRange + 1)));
            this->used_ += 1;
        }
        count++;
    }
};

void Span::addMultNumbers(unsigned int startRange, unsigned int endRange) {

    for (unsigned int i = 0; i < this->max_; i++) {
        this->number_.push_back(0);
        this->used_ = 0;
    }    
    for (std::vector<unsigned int>::iterator it = this->number_.begin(); it < this->number_.end(); ++it) {
        if (it < this->number_.end()) {
            *it = (startRange + (rand() % (endRange - startRange + 1)));
            this->used_ += 1;            
        }
    }    
};

// for my own tests
void Span::SpanPrint(const Span &span, unsigned int nbr) {
    if((span.used_ < 1) || (nbr >= span.used_))
        throw std::out_of_range("SpanPrint() out of initialised scope");
    std::cout << span.number_[nbr] << std::endl;
};
