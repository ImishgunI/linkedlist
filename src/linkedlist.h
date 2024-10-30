#ifndef LIST_H
#define LIST_H

typedef struct list {
    int value;
    struct list* next;
} list;

void push(list** root, int value);
list* pop();
#endif