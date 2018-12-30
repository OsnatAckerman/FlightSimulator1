//
// Created by shira on 12/19/18.
//

#ifndef EX3_COMMAND_H
#define EX3_COMMAND_H

#include <string>
#include <vector>

using namespace std;

class Command{
public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

#endif //EX3_COMMAND_H
