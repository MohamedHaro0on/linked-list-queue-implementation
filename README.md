# Queue Implementation in C++

This project provides a simple implementation of a Queue data structure using C++. The implementation uses a `Node` class for the underlying linked list representation and supports basic operations like enqueue, dequeue, and peek.

## Files

### 1. `Node.h`
Defines the `Node` class used to store individual elements in the queue.

### 2. `Node.cpp`
Contains the implementation of the `Node` class constructor.

### 3. `Queue.h`
Declares the `Queue` class with methods for managing the queue's operations.

### 4. `Queue.cpp`
Implements the methods of the `Queue` class, including:
- **`enqueue(int value)`**: Adds a value to the rear of the queue.
- **`dequeue()`**: Removes and returns the value at the front of the queue.
- **`peek()`**: Returns the value at the front of the queue without removing it.
- **`isEmpty()`**: Checks if the queue is empty.

### 5. `main.cpp`
Provides an example program that demonstrates the usage of the `Queue` class.

## Features
- **Dynamic Memory Management**: Uses dynamic memory allocation to handle the queue elements.
- **Encapsulation**: Separates implementation details using headers and source files.
- **Basic Operations**: Supports standard queue operations (enqueue, dequeue, peek, and check if empty).

## How to Compile and Run

### Compilation
You can compile the project using `g++`:
```bash
g++ -o queue_program main.cpp Queue.cpp Node.cpp
```

### Execution
Run the compiled program:
```bash
./queue_program
```

### Example Output
```plaintext
Front element: 10
Dequeued: 10
Dequeued: 20
Front element: 30
Dequeued: 30
Queue is empty!
Dequeued: -1
```

## Code Overview

### `Queue.h` Class Declaration
```cpp
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int value);
    int dequeue();
    int peek();
};
```

### `main.cpp` Demonstration
```cpp
Queue q; // Create a queue object

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

std::cout << "Front element: " << q.peek() << std::endl;
std::cout << "Dequeued: " << q.dequeue() << std::endl;
std::cout << "Dequeued: " << q.dequeue() << std::endl;
std::cout << "Front element: " << q.peek() << std::endl;
std::cout << "Dequeued: " << q.dequeue() << std::endl;
std::cout << "Dequeued: " << q.dequeue() << std::endl;
```

## Future Improvements
- Add exception handling for better error management.
- Implement additional methods like `size()` to return the number of elements in the queue.
- Create unit tests for validating functionality.
