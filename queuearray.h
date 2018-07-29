//
// Created by arjun on 3/12/18.
//

#include <memory.h>
#include <stdio.h>

#ifndef QUEUE_QUEUEARRAY_H
#define QUEUE_QUEUEARRAY_H
#define MAX_SIZE 500

#endif //QUEUE_QUEUEARRAY_H

int front = -1;
int rear = -1;
int q[MAX_SIZE];


void enQueue(int n){

    if ((rear + 1) % MAX_SIZE == front) {

        return;

    }else if(isEmpty()){

        front++;
        rear++;

    } else

        rear = (rear + 1) % MAX_SIZE;

    q[rear] = n;

}

void deQueue(){

    if (isEmpty() == 1)

        return;

    else if (front == rear)

        front = rear = -1;

    else

        front = (front + 1) % MAX_SIZE;

}

int Front(){

    return q[front];
}

int isEmpty(){

    if (front == rear == -1)

        return 1;

    else

        return 0;
}

void print(){

    for (int i = front; i <= rear ; ++i) {

        printf("%d ", q[i]);
    }

    printf("\n");
}