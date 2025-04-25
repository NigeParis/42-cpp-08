/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/25 17:44:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"
#include <list>
int main(void) {
    std::cout << "--------- My tests -------------" << std::endl;
   
    {
        MutantStack<std::string> test2;
        test2.push("test2 first in");
        MutantStack<std::string> test;
        
        test.push("test first in");
        test.push("test last in");
        std::cout << "test.top(): \"" << test.top() << "\" - LIFO" << std::endl;
        // test.pop();
        // std::cout << test.top() << std::endl;
        // std::cout << test.size() << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << "test.size(): " << test.size() << std::endl;
        std::cout << "test2.size(): " << test2.size() << std::endl;
        test2 = test;
        std::cout << "test2.size(): " << test2.size() << " after test2 = test" << std::endl;
        std::cout << "-----------" << std::endl;
        
        std::cout << "Using iterators - start begin() and it++" << std::endl;
        MutantStack<std::string>::iterator it = test2.begin();
        std::cout << *it << std::endl;
        ++it;
        std::cout << *it << std::endl;
        ++it;
        std::cout << *it << std::endl;

        std::cout << "-----------" << std::endl;

        std::cout << "Using iterators - start end() and it--" << std::endl;
        MutantStack<std::string>::iterator ite = test2.end();
        std::cout << *ite << std::endl;
        --ite;
        std::cout << *ite << std::endl;
        --ite;
        std::cout << *ite << std::endl;
    }
//     return 0;
// } 


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
//         // return 0;
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
        // std::stack<int> s(mstack); // does not work see modification below
        // Use std::list as the underlying container for std::stack
        std::stack<int, std::list<int> > s(mstack);
    }
    return 0;
}