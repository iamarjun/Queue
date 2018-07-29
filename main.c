#include <stdio.h>
#include "queuelinkedlist.h"

int main() {

    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    print();
    deQueue();
    print();
    deQueue();
    print();

    return 0;
}