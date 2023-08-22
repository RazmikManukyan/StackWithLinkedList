# Stack Class Implementation

This project provides a C++ implementation of a stack data structure using a linked list.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)

## Introduction

The Stack class is a basic implementation of a stack data structure that follows the Last-In-First-Out (LIFO) principle. It is implemented using a singly linked list where each node holds a value of the specified type and has a pointer to the next node in the sequence.

## Features

- Push elements onto the stack
- Pop elements from the stack
- Access the top element using `peek()`
- Check if the stack is empty using `isEmpty()`
- Copy constructor and copy assignment for proper copying
- Move constructor and move assignment for efficient moves
- Overloaded `<<` operator to print stack contents
- Destructor to clean up memory

## Usage

To use the Stack class in your project, include the `Stack.h` header and instantiate a `Stack` object with the desired data type:

```cpp
#include "Stack.h"

int main() {
    Stack<int> stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;
    stack.pop();

    std::cout << "Stack size: " << stack.getSize() << std::endl;

    std::cout << "Stack elements: " << stack << std::endl;

    return 0;
}

## Example
For a more detailed example, refer to the example.cpp file in this repository.

## Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.
