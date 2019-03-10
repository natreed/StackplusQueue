//
// Created by Nathan Reed on 2019-03-07.
//
#include <cassert>
#include "Stack.cpp"

using namespace std;

/**
 * Compares ordered push values and ordered pop values to verify LIFO.
 * @return
 */
void testPushAndPopLIFO(int size) {
    Stack *testStack = new Stack();
    int pushOrder[size];
    int popOrder[size];

    cout << "TEST - STACK IS LIFO\n";
    cout << "values added to stack in this order.\n";
    for (int i = 0; i < size; ++i) {
        testStack->push(i);
        pushOrder[i] = i;
        cout << to_string(i) + ' ';
    }

    cout << "\nvalues are removed in reverse order.\n";
    for (int i = 0; i < size; ++i) {
        int popVal = testStack->pop();
        popOrder[i] = popVal;
        cout << to_string(popVal) + ' ';
    }

    //Assert that arrays contain values in the same order.
    for (int i = 0; i < size; ++i) {
        int arraySize = sizeof(popOrder) / (sizeof(int));
        assert((pushOrder[i] == popOrder[arraySize - i - 1]) && "\nPush and Pop is not LIFO.\n");
    }

    cout << "\nprinted list should be empty\n";
    string result = testStack->print();
    assert(result == "");
    cout << "PASS";
    delete testStack;
}

/**
 * Tests pop() on empty stack.
 */
void testPopEmptyStack() {
    cout << "\nTEST - POP on EMPTY/NULL STACK\n";
    Stack *testStack = new Stack();
    try {
        testStack->pop();
    }
    catch (string &e) {
        assert(e == "Stack is Empty.\n");
    }
    cout << "PASS";
    delete testStack;
}