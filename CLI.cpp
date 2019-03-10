//
// Created by Nathan Reed on 2019-03-10.
//
#include "CommandLineInterface.h"


int CommandLineInterface::runStack() {
    Stack * stack = new Stack();
    Command command;
    cout << "The stack holds integer values only.\n";
    cout << "Commands are 'put <integer>' and 'get.\n";
    cout << "To return to the main menu enter 'q'\n";
    bool quit = false;
    do {
        try {
            command = getCommand();
        }
        catch (string &e) {
            cout << "\n\n";
            continue;
        }
        if (command.cmd == "put") {
            string to_push = command.arg;
            stack->push(stoi(to_push));
        } else if (command.cmd == "get") {
            try {
                int result = stack->pop();
                cout << "Fetched value: " + to_string(result) + "\n";
            }
            catch (string &e) {
                cout << e;
                continue;
            }
        } else if (command.cmd == "q") {
            quit = true;
        }
        cout << "Current Stack: ";
        stack->print();
        cout << '\n';
    } while (!quit);
    delete stack;
    stack = nullptr;
    return 0;
}

int CommandLineInterface::runQueue() {
    Queue *queue = new Queue();
    Command command;
    cout << "The queue holds integer values only.\n";
    cout << "Commands are 'put <integer>' and 'get.\n";
    cout << "To return to the main menu enter 'q'\n";
    bool quit = false;
    do {
        try {
            command = getCommand();
        }
        catch (string &e) {
            cout << "\n\n";
            continue;
        }
        if (command.cmd == "put") {
            string to_push = command.arg;
            // to_push has already been verified as integer in getCommand
            queue->enQueue(stoi(to_push));
        } else if (command.cmd == "get") {
            try {
                int result = queue->deQueue();
                cout << "Fetched value: " + to_string(result) + "\n";
            }
            catch (string &e) {
                cout << e;
                continue;
            }
        } else if (command.cmd == "q") {
            quit = true;
        }
        cout << "Current Queue: ";
        queue->print();
        cout << '\n';
    } while (!quit);
    delete queue;
    return 0;
};

Command CommandLineInterface::getCommand() {
    Command command;
    string input;
    getline(cin, input);
    if (input == "q") {
        command.cmd = input;
        command.arg = '0';
        return command;
    }
    command.cmd = input.substr(0, input.find(' '));
    input.erase(0, input.find(' ') + 1);
    command.arg = input.substr(0, input.find(' '));
    if (validateCommand(command)) {
        return command;
    } else {
        throw string("Please enter a valid command.\n");
    }
}

bool CommandLineInterface::validateCommand(Command command) {
    if (command.cmd == "put") {
        try {
            // Check to see if arg is an integer
            stoi(command.arg);
        }
        catch (invalid_argument &) {
            cout << "Invalid data. Must be integer.\n";
            return false;
        }
        catch (out_of_range &){
            cout << "Integer is out of range. Must be a uint_64 or smaller.";
            return false;
        }
        return true;
    } else if (command.cmd == "get") {
        return true;
    } else {
        cout << "Invalid command. Please use 'put <integer>', 'get' or 'q' to return to main menue.\n";
        return false;
    }
}
