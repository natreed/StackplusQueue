//
// Created by Nathan Reed on 2019-03-07.
//

#include "stack.h"

int Stack::push(int val) {
    StackNode * node_to_add = new StackNode(val);
    //push to front of List
    if (head == NULL) {
        head = node_to_add;
        node_to_add->next = nullptr;
    }
    else {
        node_to_add->next = head;
        head = node_to_add;
    }
}

int Stack::pop() {
    int return_val;
    //TODO: SHOULD NOT return integer here. Need to return some sort of ec.
    if (head == NULL) {
        return -1;
    }
    else {
        StackNode * temp = head->next;
        return_val = head->data;
        delete head;
        head = temp;
    }
    return return_val;
}

void Stack::print(){
    if (head == nullptr) {
        return;
    }
    else {
        StackNode * current = head;
        while (current) {
            cout << current->data;
            cout << '\n';
            current = current->next;
        }
    }
}