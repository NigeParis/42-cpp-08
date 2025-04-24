/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/24 15:05:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main(void) {
   
    std::cout << "-------------- main 42 - project --------------" << std::endl; 
    try {
        
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            //return 0;
        
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }


    std::cout << "----------------- My test #1 ------------------" << std::endl; 
    // empty
    try {
        Span test(20000);
        Span test2;
        test2 = test;
        std::cout << test2.shortestSpan() << std::endl;
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------- My test #2 ------------------" << std::endl; 
    
    
    try {
        Span test(20000);
        Span test2;
        test.addNumber(6);
        test.addNumber(9);
        test.addNumber(17);
        test.addNumber(3);
        test.addNumber(11);

        test2 = test;
     
        test2.SpanPrint(test2, 0);
        test2.SpanPrint(test2, 1);
        test2.SpanPrint(test2, 2);
        test2.SpanPrint(test2, 3);
        test2.SpanPrint(test2, 4);

        std::cout << std::endl;

        std::cout << test2.shortestSpan() << std::endl;
        std::cout << test2.longestSpan() << std::endl;
     
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------- My test #3 ------------------" << std::endl; 


    try {
        Span test(4);
        test.addNumber(6);
        test.addNumber(9);
        test.addNumber(17);
        test.addNumber(3);

        test.SpanPrint(test, 2);

        
        test.addNumber(11);
     
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------- My test #4 ------------------" << std::endl; 


    try {
        Span test(10000, 1, 10);
   
        test.SpanPrint(test, 0);
        test.SpanPrint(test, 1);
        test.SpanPrint(test, 2);
        test.SpanPrint(test, 3);
        test.SpanPrint(test, 10000);

        
        // test.addNumber(11);
     
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }
    
    return 0;
} 
