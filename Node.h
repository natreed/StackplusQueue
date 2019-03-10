//
// Created by Nathan Reed on 2019-03-09.
//

#ifndef CARBONBLACKTEST_NODE_H
#define CARBONBLACKTEST_NODE_H

class Node {
public:
    Node(int value) {
        data = value;
        next = nullptr;
    }

    int data;
    Node *next;
};

#endif //CARBONBLACKTEST_NODE_H
