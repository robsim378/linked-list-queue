//
// Created by Robert on 2019-01-21.
//

#ifndef LINKED_LIST_BASED_QUEUE_QUEUE_H
#define LINKED_LIST_BASED_QUEUE_QUEUE_H

#include "Node.h"
#include <cstdlib>

class Queue {
    public:
        Queue();
        ~Queue();
        void enqueue(int data);     //adds a new node with the data passed at the end of the queue.
        int dequeue();  //returns the data stored in the node pointed to be head and frees the node. Do not call on an empty queue.
        int isEmpty();  //returns 1 if the queue is empty, 0 otherwise.
    private:
        Node *head;     //stores the address of the first element in the queue.
};


#endif //LINKED_LIST_BASED_QUEUE_QUEUE_H
