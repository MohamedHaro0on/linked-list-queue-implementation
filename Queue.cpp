#include "Queue.h"
#include <iostream>

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue()
{
    while (!isEmpty())
    {
        dequeue();
    }
}

bool Queue::isEmpty()
{
    return front == nullptr;
}

void Queue::enqueue(int value)
{
    Node *newNode = new Node(value);
    if (rear == nullptr)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int Queue::dequeue()
{
    if (isEmpty())
    {
        std::cerr << "Queue is empty!" << std::endl;
        return -1;
    }
    Node *temp = front;
    int value = front->data;
    front = front->next;
    if (front == nullptr)
    {
        rear = nullptr;
    }
    delete temp;
    return value;
}

int Queue::peek()
{
    if (isEmpty())
    {
        std::cerr << "Queue is empty!" << std::endl;
        return -1;
    }
    return front->data;
}
