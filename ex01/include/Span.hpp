/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:40:20 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 16:00:36 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class Span {

    public:
    
        Span(void);
        Span(unsigned int number);
        Span(const Span &span);
        Span &operator=(const Span &span);
        ~Span(void);
    
        void SpanPrint(const Span &span, unsigned int nbr);
    
    private:
    
        std::vector<unsigned int> number_;
        unsigned int max_;
        unsigned int used_;
        
    
};