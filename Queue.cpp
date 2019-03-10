//
// Created by Nathan Reed on 2019-03-07.
//
#include "Queue.h"

int Queue::enQueue(int to_add) {
    return addBack(to_add);
}

int Queue::deQueue() {
    return removeFront();
}