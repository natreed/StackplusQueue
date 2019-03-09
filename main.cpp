#include <iostream>
#include "stack_test.cpp"
#include "QueueTest.cpp"

using namespace std;

int main() {
    testPushAndPopLIFO(6);
    cout << "\n\nQueue Tests\n\n";
    testEnqueueDequeueFIFO(6);
    return 0;
}