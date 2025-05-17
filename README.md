# 42-cpp-08 
# **42 - Exercise 00: Easy Find**  

## **Overview**  
This exercise focuses on searching for elements in **STL containers** using **iterators**. The goal is to implement a **template function** that efficiently finds a value inside a given container.

---

## **Objectives**  
- Use **STL containers** like `vector`, `list`, and `deque`.  
- Implement **iterators** for efficient element lookup.  
- Create a **generic function** using **templates** to work with multiple container types.  

---

## **Implementation Approach**  

### **1. Template-Based Search Function**  
Using `std::find` from the `<algorithm>` library to search for an element efficiently.  

```cpp
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
bool easyFind(T& container, int value) {
    return std::find(container.begin(), container.end(), value) != container.end();
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int searchValue = 30;

    if (easyFind(numbers, searchValue))
        std::cout << searchValue << " found!" << std::endl;
    else
        std::cout << searchValue << " not found!" << std::endl;

    return 0;
}

```
Explanation
```
    Templates allow the function to work with any STL container (vector, list, deque).

    std::find() searches from container.begin() to container.end().

    Returns true if found, otherwise false.

```
Key Takeaways

```

    STL iterators provide efficient ways to traverse containers.

    Templates make functions flexible for different container types.

    Using std::find() simplifies searching operations.

```

# **42 - Exercise 01: Span**  

## **Overview**  
This exercise focuses on handling **numeric sequences efficiently** using C++ STL. The goal is to implement a class that stores numbers and computes the **shortest** and **longest spans** between them.

---

## **Objectives**  
- Implement a **class to store numbers dynamically**.  
- Use **STL containers** (`vector`) to manage elements.  
- Compute the **shortest** and **longest distance** between elements.  

---

## **Implementation Approach**  

### **1. Span Class Definition**  
The class should support adding numbers and computing spans.  

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    std::vector<int> numbers;
public:
    void addNumber(int num) { numbers.push_back(num); }

    int shortestSpan() {
        if (numbers.size() < 2) throw std::runtime_error("Not enough numbers!");
        std::vector<int> sorted = numbers;
        std::sort(sorted.begin(), sorted.end());
        int minSpan = sorted[1] - sorted[0];
        for (size_t i = 1; i < sorted.size(); ++i)
            minSpan = std::min(minSpan, sorted[i] - sorted[i - 1]);
        return minSpan;
    }

    int longestSpan() {
        if (numbers.size() < 2) throw std::runtime_error("Not enough numbers!");
        return *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
    }
};

int main() {
    Span sp;
    sp.addNumber(10);
    sp.addNumber(3);
    sp.addNumber(20);
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}
```
Explanation
```
    Stores numbers in a std::vector<int>.

    Computes shortest span by sorting and finding the smallest difference.

    Finds longest span using std::max_element() and std::min_element().

    Handles edge cases when there aren't enough numbers.
```
Key Takeaways
```
    Uses STL containers for efficient storage and manipulation.

    Implements sorting and comparisons for span calculations.

    Reinforces dynamic memory handling with vector.

```

# NOTES
# C++98 Containers and Their Features

## Sequence Containers
| **Container**   | **Key Features**                                                                 |
|------------------|----------------------------------------------------------------------------------|
| `std::vector`    | Dynamic array, random access, grows/shrinks dynamically.                        |
| `std::deque`     | Double-ended queue, fast at front and back operations.                          |
| `std::list`      | Doubly-linked list, efficient insert/delete anywhere, no random access.         |

## Associative Containers
| **Container**   | **Key Features**                                                                 |
|------------------|----------------------------------------------------------------------------------|
| `std::set`       | Unique, sorted elements; no duplicates.                                         |
| `std::multiset`  | Sorted elements, allows duplicates.                                             |
| `std::map`       | Key-value pairs, unique keys, sorted.                                           |
| `std::multimap`  | Key-value pairs, allows duplicate keys, sorted.                                 |

## Container Adapters
| **Container**         | **Key Features**                                                          |
|------------------------|--------------------------------------------------------------------------|
| `std::stack`           | LIFO operations (push, pop, top), no random access.                     |
| `std::queue`           | FIFO operations (push, pop, front, back), no random access.             |
| `std::priority_queue`  | Maintains heap structure, top element is the highest-priority element.  |


## Explanation of `this->c = mutantstack.c;` - ex02

In the line `this->c = mutantstack.c;`, the assignment operator is copying the underlying container of one `MutantStack` object (`mutantstack`) to another (`*this`). Here's a breakdown of what each part means:

## Key Components:

### `this->c`:
- `this` is a pointer to the current object on which the member function (`operator=` in this case) is being called.
- `this->` is used to explicitly refer to the member variables or methods of the current object.
- `c` is the **protected member** of the base class `std::stack`. It represents the underlying container used to store the stack's elements. In the default implementation of `std::stack`, this container is usually a `std::deque`.

### `mutantstack.c`:
- `mutantstack` is the object being assigned (on the right-hand side of the assignment).
- `c` in `mutantstack.c` refers to the same underlying container of the `mutantstack` object.

### `this->c = mutantstack.c;`:
- Copies the contents of the underlying container (`c`) from `mutantstack` to the current object (`*this`).
- Since the underlying container (`std::deque` or another container) supports the assignment operator (`=`), this operation performs a deep copy of all elements.

## Why This Works:
The `std::stack` class does not directly expose its underlying container to the outside world. However, since `MutantStack` is derived from `std::stack`, it inherits access to the **protected member** `c` of the base class. This allows `MutantStack` to directly manipulate the container for tasks like deep copying during assignment.


