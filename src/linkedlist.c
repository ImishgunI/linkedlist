#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>

void push(list **root, int value) {
    list *node = malloc(sizeof(list));
    if (node == NULL) {
        printf("memory wasn't been allocated");
        return;
    }
    node->value = value;
    node->next = *root;
    *root = node;
}

void pop(list **node) {
    list *delete_node;
    if (node == NULL) {
        printf("list is empty");
        return;
    }
    delete_node = *node;
    *node = (*node)->next;
    free(delete_node);
}

int is_empty(list *node) { return (node == NULL) ? 1 : 0; }

int size(list *node) {
    if (is_empty(node) != 0) {
        printf("list is empty");
        return 0;
    }
    int len = 0;
    while (node != NULL) {
        ++len;
        node = node->next;
    }
    return len;
}

list *find(list *node, int element) {
    if (is_empty(node) != 0) {
        printf("can't find element, list is empty");
        return NULL;
    }

    while (node != NULL) {
        if (node->value == element) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}