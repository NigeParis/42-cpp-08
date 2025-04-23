/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 18:51:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main(void) {
   
    
    try {
        Span test(10000);
        Span test2;
        test.addNumber(33);
        test.addNumber(1);
        test.addNumber(2);
        //test.addNumber(10);
        test2 = test;
        test.SpanPrint(test, 2);
        std::cout << std::endl;
        // test.SpanPrint(test2, 0);
        // test.SpanPrint(test2, 1);
        test.SpanPrint(test2, 3);
        // test.SpanPrint(test2, 3);
        // test.SpanPrint(test2, 4);
        // test.SpanPrint(test2, 9999);
    }
    catch(const std::exception &e) {
     
        std::cerr << e.what() << '\n';
    }
    
    return 0;
} 
// #include <iostream>
// #include <vector>
// #include <new> // For std::bad_alloc
// using namespace std;

// class Sspan {
// private:
//     vector<int> numbers;

// public:
//     // Constructor to reserve initial capacity
//     Sspan(unsigned int size) {
//         try {
//             numbers.reserve(size); // Reserve memory for the vector
//             cout << "Successfully reserved memory for size: " << size << endl;
//         } catch (bad_alloc &e) {
//             cout << "Memory allocation failed at size: " << size << endl;
//             throw; // Rethrow exception if needed
//         }
//     }

//     // Method to fill the vector with integers
//     void fill() {
//         try {
//             for (unsigned int i = 0; i < numbers.capacity(); ++i) {
//                 numbers.push_back(i); // Add integers to the vector
//             }
//         } catch (bad_alloc &e) {
//             cout << "Memory allocation failed during push_back at size: " << numbers.size() << endl;
//         }
//     }

//     // Method to display the size and capacity
//     void displayStatus() const {
//         cout << "Vector size: " << numbers.size() << ", capacity: " << numbers.capacity() << endl;
//     }
// };

// int main() {
//     unsigned int size = 1; // Start testing from size 1
//     while (true) {
//         try {
//             Sspan test(size); // Create a Span object with increasing size
//             test.fill();     // Attempt to fill the vector
//             test.displayStatus(); // Display the size and capacity
//             size *= 2;       // Double the size for the next test
//         } catch (...) {
//             cout << "Testing stopped at size: " << size << endl;
//             break; // Exit the loop if memory allocation fails
//         }
//     }

//     return 0;
// }
