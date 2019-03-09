//
// Created by Nathan Reed on 2019-03-07.
//


#ifndef CARBONBLACKTEST_STACK_H
#define CARBONBLACKTEST_STACK_H
#include <iostream>
#include "Node.h"

using namespace std;


class Stack {
public:
    Stack () {
        head = NULL;
    }

    int push(int);
    int pop();
    void print();

private:
    Node * head;
};







#endif //CARBONBLACKTEST_STACK_H
