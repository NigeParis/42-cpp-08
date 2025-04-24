/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:40:20 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/24 14:25:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <stdexcept>
#include <algorithm> 
#include <ctime>
#include <cstdlib>

class Span {

    public:
    
        Span(void);
        Span(unsigned int number);
        Span(const Span &span);
        Span &operator=(const Span &span);
        ~Span(void);

        Span(unsigned int number, unsigned int startRange, unsigned int endRange);
        void addNumber(unsigned int number);

        void SpanPrint(const Span &span, unsigned int nbr);
        unsigned int longestSpan(void);
        unsigned int shortestSpan(void);
  
    private:
    
        std::vector<unsigned int> number_;
        unsigned int max_;
        unsigned int used_;
        
    
};

std::ostream &operator<<(std::ostream &outputstream, Span &span);