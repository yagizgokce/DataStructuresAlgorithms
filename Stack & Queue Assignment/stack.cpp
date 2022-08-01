#include "Stack.h"
#include "Queue.h"

using namespace std;
Stack::Stack()= default;
void Stack::push(char data){
    queue2.enqueue(data);
    while (!queue1.isEmpty()) {
        queue2.enqueue(queue1.front());
        queue1.dequeue();
    }

    Queue q = queue1;
    queue1 = queue2;
    queue2 = q;
    q.clear();

}
void Stack:: pop()
{

    if (queue1.isEmpty())
        return;
    queue1.dequeue();
}

char Stack:: top()
{
    if (queue1.isEmpty())
        return -1;
    return queue1.front();
}
bool Stack::isEmpty() {
    if(queue1.isEmpty())
        return true;
    else
        return false;

}
void Stack::clear() {
    if (!isEmpty())
        queue1.clear();
}