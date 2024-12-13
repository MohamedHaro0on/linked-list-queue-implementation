#include <iostream>
#include "Queue.h"

int main()
{
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

     return 0;
}
