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

# Explanation of `this->c = mutantstack.c;`

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
