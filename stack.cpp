//
// Created by Nathan Reed on 2019-03-07.
//

#include "stack.h"

int Stack::push(int val) {
    Node * node_to_add = new Node(val);
    //push to front of List
    if (head == nullptr) {
        head = node_to_add;
        node_to_add->next = nullptr;
    }
    else {
        node_to_add->next = head;
        head = node_to_add;
    }
    return 0;
}

int Stack::pop() {
    int return_val;
    //TODO: SHOULD NOT return integer here. Need to return some sort of ec.
    if (head == nullptr) {
        return -1;
    }
    else {
        Node * temp = head->next;
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
        Node * current = head;
        while (current) {
            cout << current->data;
            cout << '\n';
            current = current->next;
        }
    }
}