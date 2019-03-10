//
// Created by Nathan Reed on 2019-03-07.
//
#include "Stack.h"

int Stack::push(int to_add) {
    return addFront(to_add);
}

int Stack::pop() {
    return removeFront();
};