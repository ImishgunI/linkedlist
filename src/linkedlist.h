#ifndef LIST_H
#define LIST_H

typedef struct list {
    int value;
    struct list* next;
} list;

void push(list** root, int value);
void pop(list** node);
int is_empty(list* node);
int size(list* node);
list* find(list* node, int element);
#endif