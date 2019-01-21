//
// Created by Robert on 2019-01-21.
//

#include <iostream>
#include "Queue.h"


Queue::Queue() {
    head = nullptr;     //sets the queue to empty upon creation
}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();      //nodes in queue are declared with malloc in enqueue and freed in dequeue. They must all be freed
    }                   //when the queue is out of scope to prevent memory leaks
}

int Queue::isEmpty() {
    if (head == nullptr) {
        return 1;       //returns 1 if the queue is empty
    }
    return 0;   //returns 0 if the queue has contents
}

void Queue::enqueue(int data) {
    Node *temp = head;

    if (isEmpty()){
        head = (Node *) malloc(sizeof(Node));
        head->setNext(nullptr);
        head->setData(data);
        return;
    }

    while (temp->getNext() != nullptr) {
        temp = temp->getNext();
    }

    temp->setNext((Node *) malloc(sizeof(Node)));    //uses malloc to declare memory for the next node

    temp = temp->getNext();

    temp->setData(data);    //sets the data in the newly declared node to the data passed
    temp->setNext(nullptr); //sets the newly added node to be the end of the queue
}

int Queue::dequeue() {
    Node *tempNode = head;  //temporarily stores the address of head, as it must be freed after head is changed

    int tempData = tempNode->getData();     //temporarily stores the data to be returned, as the node must be freed before returning

    head = tempNode->getNext();     //sets head to the next node in the queue

    free(tempNode);     //frees the node that is being dequeued

    return tempData;    //returns the value of the node
}