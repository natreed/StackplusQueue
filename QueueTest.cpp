//
// Created by Nathan Reed on 2019-03-07.
//
#include "Queue.cpp"
using namespace std;

/**
 * Tests various input types to make sure errors are handled correctly.
 * @return
 */
int testEnqueue() {
    Queue * testQueue = new Queue();
    //Check head is NULL before enQueue is called.

    for (int i = 0; i < 6; ++i) {
        testQueue->enQueue(i);
    }
    testQueue->print();
    return 0;
}

/**
 * Compares ordered arrays of enqueue and dequeue values to verify FIFO.
 * @return
 */
void testEnqueueDequeueFIFO(int size) {
    Queue * test_queue = new Queue();
    int enqOrder[6];
    int deqOrder[6];

    cout << "TEST - QUEUE IS FIFO\n";
    cout << "values added to queue in this order.\n";
    for (int i = 0; i < 6; ++i) {
        test_queue->enQueue(i);
        enqOrder[i] = i;
        cout << i;
        cout << '\n';
    }

    cout << "values are removed in same order.\n";
    for (int i = 0; i < 6; ++i) {
        int deqVal = test_queue->deQueue();
        deqOrder[i] = deqVal;
        cout << deqVal;
        cout << "\n";
    }

    //Assert that arrays contain values in the same order.
    for (int i = 0; i < 6; ++i) {
        assert((deqOrder[i] == enqOrder[i]) && "\nDequeue is not FIFO.\n");
    }

    cout << "printed list should be empty.\n";
    test_queue->print();
}

