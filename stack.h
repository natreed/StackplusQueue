//
// Created by Nathan Reed on 2019-03-07.
//
using namespace std;

#ifndef CARBONBLACKTEST_STACK_H
#define CARBONBLACKTEST_STACK_H
#define NULL 0

class StackNode {
public:
    StackNode (int value) {
        data = value;
    }
    int data;
    StackNode * next;
};

class Stack {
public:
    Stack () {
        head = NULL;
    }

    int push(int);
    int pop();
    void print();

private:
    StackNode * head;
};







#endif //CARBONBLACKTEST_STACK_H
