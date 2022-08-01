#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(){

    tail = NULL;

    head = NULL;

}

void Queue::enqueue(char data){



    node *temp = new node;

    temp->info = data;

    temp->next = NULL;

    if(head == NULL){

        head = temp;

    }else{

        tail->next = temp;

    }

    tail = temp;

}


void Queue::dequeue(){

    node *temp = new node;

    if(head == NULL){
        return;
    }
    else{

        temp = head;

        head = head->next;

        delete temp;

    }

}


void Queue::display(){

    node *temp = new node;

    temp = head;

    if(head == NULL){


    }
    else{

        while(temp != NULL){

            cout<<temp->info;

            temp = temp->next;

        }

    }

}
bool Queue::isEmpty(){
    if(head == NULL)
        return true;
    else
        return false;
}

void Queue::clear() {
    while(head != NULL)
        {dequeue();}

}
char Queue::front() {
    if (isEmpty())
        return -1;
    char temp = head->info;
    return temp;


}