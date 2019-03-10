//
// Created by Nathan Reed on 2019-03-09.
//

#ifndef CARBONBLACKTEST_LIST_H
#define CARBONBLACKTEST_LIST_H
#include "Node.h"

class List {
public:
    List () {
        head = nullptr;
    }

    int add_node(int);
    int remove_node();
    string print();

private:
    Node * head;
};


#endif //CARBONBLACKTEST_LIST_H
