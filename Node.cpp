//
// Created by Robert on 2019-01-21.
//

#include "Node.h"

int Node::getData() {   //returns data
    return data;
}

Node *Node::getNext() {     //returns next
    return next;
}

void Node::setNext(Node *newNext) {     //sets next to the address passed
    next = newNext;
}

void Node::setData(int newData) {   //sets data to the value passed
    data = newData;
}