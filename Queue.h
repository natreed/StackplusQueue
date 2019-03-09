//
// Created by Nathan Reed on 2019-03-07.
//

#ifndef CARBONBLACKTEST_QUEUE_H
#define CARBONBLACKTEST_QUEUE_H
#include <iostream>
#include "Node.h"

using namespace std;

class Queue {
public:
    Queue () {
        head = nullptr;
        tail = nullptr;
    }

    int enQueue(int);
    int deQueue();
    void print();

private:
    Node * head;
    Node * tail;
};

#endif //CARBONBLACKTEST_QUEUE_H
