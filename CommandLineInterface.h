//
// Created by Nathan Reed on 2019-03-10.
//

#ifndef CARBONBLACKTEST_COMMANDLINEINTERFACE_H
#define CARBONBLACKTEST_COMMANDLINEINTERFACE_H

#include <iostream>

using namespace std;

typedef struct {
    string cmd;
    string arg;
} Command;

class CommandLineInterface {
public:

    int RunTests();

    int runStack();

    Command getCommand();

    bool validateCommand(Command command);

    int runQueue();
};


#endif //CARBONBLACKTEST_COMMANDLINEINTERFACE_H
