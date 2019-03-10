#include <iostream>
#include "StackTest.cpp"
#include "QueueTest.cpp"
#include "List.cpp"

int main() {
    cout << "Stack Tests\n\n";
    testPushAndPopLIFO(6);
    cout << "\n\nQueue Tests\n\n";
    testEnqueueDequeueFIFO(6);
    testDequeueEmptyQueue();
    return 0;
}