//
// Created by Nathan Reed on 2019-03-07.
//
#include <cassert>
#include "Queue.cpp"

/**
 * Tests various input types to make sure errors are handled correctly.
 * @return
 */
void testEnqueue() {
    Queue *testQueue = new Queue();
    //Check head is NULL before enQueue is called.

    for (int i = 0; i < 6; ++i) {
        testQueue->enQueue(i);
    }
    testQueue->print();
    delete testQueue;
}

/**
 * Compares ordered arrays of enqueue and dequeue values to verify FIFO.
 * @return
 */
void testEnqueueDequeueFIFO(int size) {
    Queue *testQueue = new Queue();
    int enqOrder[size];
    int deqOrder[size];

    cout << "TEST - QUEUE IS FIFO\n";
    cout << "values added to queue in this order.\n";
    for (int i = 0; i < size; ++i) {
        testQueue->enQueue(i);
        enqOrder[i] = i;
        cout << i;
        cout << '\n';
    }

    cout << "Values are removed in same order.\n";
    for (int i = 0; i < size; ++i) {
        int deqVal = testQueue->deQueue();
        deqOrder[i] = deqVal;
        cout << deqVal;
        cout << "\n";
    }

    //Assert that arrays contain values in the same order.
    for (int i = 0; i < size; ++i) {
        assert((deqOrder[i] == enqOrder[i]) && "\nDequeue is not FIFO.\n");
    }

    cout << "printed list should be empty.\n";
    string printOutput;
    cin >> printOutput;
    assert(printOutput == "" );
    cout << "PASS";
    delete testQueue;
}

/**
 * Tests dequeue
 */
void testDequeueEmptyQueue() {
    cout << "\nTEST - DEQUEUE on EMPTY/NULL QUEUE\n";
    int result;
    Queue *testQueue = new Queue();
    try {
        testQueue->deQueue();
    }
    catch (string e) {
        assert(e == "Queue is Empty.");
    }
    cout << "PASS";
    //Memory will be freed if program terminates
    delete testQueue;
}

