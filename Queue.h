#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

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

#endif
