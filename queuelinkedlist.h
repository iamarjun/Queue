//
// Created by arjun on 3/12/18.
//

#include <stdlib.h>
#include <stdio.h>

#ifndef QUEUE_QUEUELINKEDLIST_H
#define QUEUE_QUEUELINKEDLIST_H

#endif //QUEUE_QUEUELINKEDLIST_H

typedef struct Node{

    int data;
    struct Node* next;


} Node;

Node* front = NULL;
Node* rear = NULL;

void enQueue(int n){

    Node* temp = (Node*) malloc(sizeof(struct Node*));

    temp->data = n;
    temp->next = NULL;

    if (front == NULL && rear == NULL) {

        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;

}

void deQueue(){

    Node* temp = front;

    if (front == NULL)

        return;

    if (front == rear)

        front = rear = NULL;

    else

        front = front->next;

    free(temp);

}

int Front(){

    return front->data;
}

void print(){

    Node* temp = front;

    while (temp != NULL){

        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}