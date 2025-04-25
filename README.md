# 42-cpp-08
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
