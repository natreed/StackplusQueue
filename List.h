//
// Created by Nathan Reed on 2019-03-09.
//

#ifndef CARBONBLACKTEST_LIST_H
#define CARBONBLACKTEST_LIST_H

#include "Node.h"

using namespace std;


class List {
public:
    List(string _type) {
        head = nullptr;
        tail = nullptr;
        type = _type;
    }

    ~List() {
        if (head == nullptr) {
            return;
        }
        tail = nullptr;
        Node * current = head;
        while (current) {
            current = current->next;
            delete head;
            head = current;
        }
        head = nullptr;
    }

    int addFront(int);

    int addBack(int);

    int removeFront();

    string print();

private:
    string type;
    Node *head;
    Node *tail;
};


#endif //CARBONBLACKTEST_LIST_H
