//
// Created by Nathan Reed on 2019-03-07.
//


#ifndef CARBONBLACKTEST_STACK_H
#define CARBONBLACKTEST_STACK_H

#include <iostream>
#include "List.h"

using namespace std;

class Stack : public List {
public:
    Stack() : List("Stack") {}

    int push(int to_add);

    int pop();
};


#endif //CARBONBLACKTEST_STACK_H
