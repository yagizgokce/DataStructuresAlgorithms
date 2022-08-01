#ifndef STACK_H
#define STACK_H
#include "Queue.h"
class Stack {
private:
    Queue queue1, queue2;
public:
    Stack();

    void push(char data);

    void pop();

    bool isEmpty();

    void clear();

    char top();

};
#endif //STACK_H
