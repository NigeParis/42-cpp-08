/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:40:20 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/26 09:47:41 by nrobinso         ###   ########.fr       */
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
        Span(unsigned int N);
        Span(const Span &span);
        Span &operator=(const Span &span);
        ~Span(void);

        Span(unsigned int number, unsigned int startRange, unsigned int endRange);
        void addNumber(unsigned int number);
        void addMultNumbers(unsigned int startRange, unsigned int endRange);

        void SpanPrint(const Span &span, unsigned int nbr);
        unsigned int longestSpan(void);
        unsigned int shortestSpan(void);
  
    private:
    
        std::vector<unsigned int> number_;
        unsigned int max_;
        unsigned int used_;
};
