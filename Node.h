//
// Created by Robert on 2019-01-21.
//

#ifndef LINKED_LIST_BASED_QUEUE_NODE_H
#define LINKED_LIST_BASED_QUEUE_NODE_H


class Node {
    public:
        Node *getNext();    //returns the address of the next element in the linked list
        void setNext(Node *newNext);    //sets a new value for next
        int getData();      //returns the data stored in the private data field
        void setData(int newData);  //sets a new value for data
    private:
        int data;   //stores the data
        Node *next; //holds the address of the next element in the linked list
};


#endif //LINKED_LIST_BASED_QUEUE_NODE_H
