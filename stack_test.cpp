//
// Created by Nathan Reed on 2019-03-07.
//
#include "stack.cpp"
int test_push ();
int test_pop ();

int run_tests () {
    test_push();
    test_pop();
}


int test_push () {
    Stack * test_stack = new Stack();
    for (int i = 0; i < 6; ++i) {
        test_stack->push(i);
    }

    test_stack->print();

}


int test_pop () {
    Stack * test_stack = new Stack();

    cout << "values pushed onto stack in this order.\n";
    for (int i = 0; i < 6; ++i) {
        test_stack->push(i);
        cout << i;
        cout << "\n";
    }

    cout << "values are removed in reverse order.\n";
    for (int i = 0; i < 6; ++i) {
        cout << test_stack->pop();
        cout << "\n";
    }

    cout << "printed list should be empty.\n";
    test_stack->print();

}

