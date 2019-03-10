//
// Created by Nathan Reed on 2019-03-07.
//

#ifndef CARBONBLACKTEST_QUEUE_H
#define CARBONBLACKTEST_QUEUE_H

#include <iostream>
#include "List.cpp"

using namespace std;

class Queue : public List {
public:
    Queue() : List("Queue") {}

    int enQueue(int);

    int deQueue();
};

#endif //CARBONBLACKTEST_QUEUE_H
