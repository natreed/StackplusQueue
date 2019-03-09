//
// Created by Nathan Reed on 2019-03-07.
//
#include "Queue.h"

using namespace std;

int Queue::enQueue(int to_add) {
    Node * qnode = new Node(to_add);
    if (head == nullptr) {
        head = qnode;
        tail = qnode;
    }
    else {
        tail->next = qnode;
        tail = tail->next;
    }
    return 0;
}

int Queue::deQueue() {
    int returnVal;
    //TODO: SHOULD NOT return integer here. Need to return some sort of ec.
    if (head == nullptr) {
        return -1;
    }
    else {
        Node * temp = head->next;
        returnVal = head->data;
        delete head;
        head = temp;
    }
    return returnVal;
}

void Queue::print(){
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

