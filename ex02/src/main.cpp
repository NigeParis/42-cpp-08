/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 11:48:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main(void) {
   
    MutantStack<std::string> test2;
    test2.push("first out");
    MutantStack<std::string> test(test2);
    
    test.push("first in");
    test.push("last in");
    std::cout << test.top() << std::endl;
    test.pop();
    std::cout << test.top() << std::endl;
    std::cout << test.size() << std::endl;
    std::cout << test2.size() << std::endl;
    test2 = test;
    std::cout << test2.size() << std::endl;
    return 0;
} 
