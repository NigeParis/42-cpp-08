#include "../include/easyfind.hpp"
#include <cstdlib>
#include <ctime>


int main(int argc, char *argv[]) {
    srand(time(NULL));
    std::vector<int> array;

    if (argc != 2) {
        std::cout << "./easyfind [number to find]" << std::endl;
        return (-1);
    }

    for (int i = 0; i < 10; i++) {
        int nbr = rand() % 22 - 10;
        array.push_back(nbr);
        std::cout << "array[" << i << "]" << "value: " << array[i] << " address: " << &array[i] << std::endl;
    }
    std::cout << "--------- find(" << argv[1] << ")-result ---------" << std::endl;

    try {

        std::vector<int>::iterator it = easyfind(array, atoi(argv[1]));
        std::cout << "value: " << *it << std::endl;
        it++;
        if (*it != 0)
            std::cout << "next value: " << *it << std::endl;

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;

}