//
// Created by Nathan Reed on 2019-03-07.
//

#ifndef CARBONBLACKTEST_QUEUE_H
#define CARBONBLACKTEST_QUEUE_H

//TODO: Combine nodes into single shared node class. They have same structure.
class QueNode {
public:
    QueNode (int value) {
        data = value;
    }
    int data;
    Quenode * next;
};



class Queue {
public:
    Queue () {
        head = nullptr;
        tail = nullptr;
    }

    int EnQueue (int);
    int DeQueue ();


private:
    QueNode * head;
    QueNode * tail;
};

int Queue::EnQueue(int to_add) {
    QueNode * qnode = new QueNode(to_add);
    if (head == nullptr) {
        head = qnode;
        tail = qnode;
    }
    else {
        tail->next = qnode;
        tail = tail->next;
    }

}

int Queue::DeQueue() {
    int return_val;
    //TODO: SHOULD NOT return integer here. Need to return some sort of ec.
    if (head == NULL) {
        return -1;
    }
    else {
        QueNode * temp = head->next;
        return_val = head->data;
        delete head;
        head = temp;
    }
    return return_val;
}


#endif //CARBONBLACKTEST_QUEUE_H
