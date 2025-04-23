/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 15:54:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main(void) {
   
    

    Span test(4);
    Span test2(0);
    test2 = test;
    test.SpanPrint(test, 3);
    //test.~Span();
    
    test.SpanPrint(test2, 0);
    test.SpanPrint(test2, 1);
    test.SpanPrint(test2, 2);
    test.SpanPrint(test2, 3);
    
    
    return 0;
} 