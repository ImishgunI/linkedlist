#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

void push(list** root, int value) {
    list* node = malloc(sizeof(list));
    if(node == NULL) {
        printf("memory wasn't been allocated");
        return;
    }
    node->value = value;
    node->next = *root;
    *root = node;
}
