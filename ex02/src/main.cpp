/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/26 09:40:18 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main(void) {
    std::cout << "--------- My tests -------------" << std::endl;
    {
        MutantStack<std::string> test2;
        test2.push("test2 first in");
        MutantStack<std::string> test(test2);  
        test.push("test first in");
        test.push("test last in");
        MutantStack<std::string> test3(test);
        std::cout << "test3 size: " << test3.size() << std::endl;
        std::cout << "test size: " << test.size() << std::endl;
        std::cout << "test.top(): \"" << test.top() << "\" - LIFO" << std::endl;
        test.pop();
        std::cout << "after test.pop() - test size: " << test.size() << std::endl;
        std::cout << "test2.size(): " << test2.size() << std::endl;
        std::cout << "-----------" << std::endl;
        test2 = test;
        std::cout << "test2.top(): \"" << test2.top() << "\" - LIFO" << std::endl;
        std::cout << "test2.size(): " << test2.size() << " after test2 = test" << std::endl;
        std::cout << "-----------" << std::endl; 
        std::cout << "Using iterators - start begin() and it++" << std::endl;
        MutantStack<std::string>::iterator it = test2.begin();
        for (int i = 0; i < static_cast<int> (test2.size()); i++) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << "-----------" << std::endl;
        std::cout << "Using reverse_iterator - start rbegin() and ite++" << std::endl;
        MutantStack<std::string>::reverse_iterator ite = test2.rbegin();
        for (int i = 0; i < static_cast<int> (test2.size()); i++) {
            std::cout << *ite << std::endl;
            ++ite;
        }
        std::cout << "-----------" << std::endl;
        std::cout << "Using const_iterator - start rbegin() and itc++" << std::endl;
        MutantStack<std::string>::const_iterator itc = test3.begin() ;
        for (int i = 0; i < static_cast<int> (test3.size()); i++) {
            std::cout << *itc << std::endl;
            ++itc;
        }
    }
    std::cout << "--------- tests 42 -------------" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "-------- std::list<int> --------" << std::endl;
    {
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack); 
    }
    return 0;
}
