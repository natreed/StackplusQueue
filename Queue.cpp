//
// Created by Nathan Reed on 2019-03-07.
//
#include "Queue.h"


int Queue::enQueue(int to_add) {
    Node *qnode = new Node(to_add);
    if (head == nullptr) {
        head = qnode;
        tail = qnode;
    } else {
        tail->next = qnode;
        tail = tail->next;
    }
    return 0;
}

int Queue::deQueue() {
    int returnVal;
    if (head == nullptr) {
        throw string("Queue is Empty.");
    } else {
        Node *temp = head->next;
        returnVal = head->data;
        delete head;
        head = temp;
    }
    return returnVal;
}

string Queue::print() {
    string output = "";
    if (head == nullptr) {
        return output;
    } else {
        Node *current = head;
        while (current) {
            output += to_string(current->data) + "\n";
            current = current->next;
        }
    }
    cout << output;
    return output;
}

