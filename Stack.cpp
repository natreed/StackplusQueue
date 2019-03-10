//
// Created by Nathan Reed on 2019-03-07.
//
#include "Stack.h"

int Stack::push(int val) {
    Node *node_to_add = new Node(val);
    //push to front of List
    if (head == nullptr) {
        head = node_to_add;
        node_to_add->next = nullptr;
    } else {
        node_to_add->next = head;
        head = node_to_add;
    }
    return 0;
}

int Stack::pop() {
    int return_val;
    string err =
    if (head == nullptr) {
        throw std::string("Queue is Empty.");
    } else {
        Node *temp = head->next;
        return_val = head->data;
        delete head;
        head = temp;
    }
    return return_val;
}

string Stack::print() {
    string output = "";
    if (head == nullptr) {
        return output;
    } else {
        Node * current = head;
        while (current) {
            output += to_string(current->data) + "/n";
            current = current->next;
        }
    }
    cout << output;

    return output;
}