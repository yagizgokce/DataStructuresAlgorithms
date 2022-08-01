
#ifndef QUEUE_H
#define QUEUE_H
struct node{

    char info;

    struct node *next;

};


class Queue{

private:

    node *head;

    node *tail;

public:

    Queue();

    void enqueue(char data);

    void dequeue();

    bool isEmpty();

    void clear();

    char front();

    void display();
};
#endif
