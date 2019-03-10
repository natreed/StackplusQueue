//
// Created by Nathan Reed on 2019-03-10.
/**
 * This small application
 */

#include "StackTest.cpp"
#include "QueueTest.cpp"
#include "CLI.cpp"


void mainMenu();

int RunTests();

int main() {
    mainMenu();

    return 0;
}

void mainMenu() {
    CommandLineInterface *CLI = new CommandLineInterface;
    bool exit;
    do {
        exit = false;
        cout << "Enter '1' to run Tests.\n";
        cout << "Enter '2' to play with stack.\n";
        cout << "Enter '3' to play with a queue.\n";
        cout << "Enter '4 to exit\n";
        string select;
        getline(cin, select);

        if (select == "1") {
            RunTests();
        } else if (select == "2") {
            CLI->runStack();
        } else if (select == "3") {
            CLI->runQueue();
        } else if (select == "4") {
            exit = true;
        } else {
            continue;
        }
    } while (!exit);
    delete CLI;
}


int RunTests() {
    cout << "Stack Tests\n\n";
    testPushAndPopLIFO(6);
    testPopEmptyStack();
    cout << "\n\nQueue Tests\n\n";
    testEnqueueDequeueFIFO(6);
    testDequeueEmptyQueue();
    return 0;
}
