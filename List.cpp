//
// Created by Nathan Reed on 2019-03-09.
//
#include "List.h"

/**
 * Adds integer to front of List.
 * Reason: Follows LIFO for Stack::push.
 * @param toAdd
 * @return
 */
int List::addFront(int toAdd) {
    Node *sNode = new Node(toAdd);
    //push to front of List
    if (head == nullptr) {
        head = sNode;
        tail = head;
    } else {
        sNode->next = head;
        head = sNode;
    }
    return 0;
}

/**
 * Add integer to end using tail pointer.
 * Reason: Follows FIFO for Queue::enQueue.
 * @param to_add
 * @return
 */
int List::addBack(int to_add) {
    Node *qNode = new Node(to_add);
    if (head == nullptr) {
        head = qNode;
        tail = qNode;
    } else {
        tail->next = qNode;
        tail = tail->next;
    }
    return 0;
}

/**
 * Used by both Stack::pop, and Queue::deQueue to fetch data.
 * @return
 */
int List::removeFront() {
    int return_val;
    if (head == nullptr) {
        throw string(type + " is Empty.\n");
    } else {
        Node *temp = head->next;
        return_val = head->data;
        delete head;
        head = temp;
    }
    return return_val;
}

/**
 * Prints list.
 * @return
 */
string List::print() {
    string output;
    if (head == nullptr) {
        return output;
    } else {
        Node *current = head;
        while (current) {
            output += to_string(current->data) + " ";
            current = current->next;
        }
    }
    cout << output;
    return output;
}