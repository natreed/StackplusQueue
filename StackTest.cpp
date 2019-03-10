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
    int pushOrder[6];
    int popOrder[6];

    cout << "TEST - STACK IS LIFO\n";
    cout << "values added to stack in this order.\n";
    for (int i = 0; i < size; ++i) {
        testStack->push(i);
        pushOrder[i] = i;
        cout << i;
        cout << '\n';
    }

    cout << "values are removed in reverse order.\n";
    for (int i = 0; i < size; ++i) {
        int popVal = testStack->pop();
        popOrder[i] = popVal;
        cout << popVal;
        cout << "\n";
    }

    //Assert that arrays contain values in the same order.
    for (int i = 0; i < size; ++i) {
        int arraySize = sizeof(popOrder) / (sizeof(int));
        assert((pushOrder[i] == popOrder[arraySize - i - 1]) && "\nPush and Pop is not LIFO.\n");
    }

    cout << "printed list should be empty";
    testStack->print();
    delete testStack;
}
