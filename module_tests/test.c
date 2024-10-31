#include "../src/linkedlist.h"

#include <stdio.h>
void push_test() {
    list* root = NULL;
    int value = 10, value2 = 20, value3 = 30;
    push(&root, value);
    push(&root, value2);
    push(&root, value3);

    if(root != NULL) {
        printf("%d\n", root->value);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}

void pop_test() {
    list* node = NULL;
    push(&node, 10);
    push(&node, 20);
    push(&node, 30);

    printf("Before pop: %d\n", node->value);
    pop(&node);
    printf("After pop: %d\n", node->value);
}

void is_empty_test() {
    list* node = NULL;
    push(&node, 10);
    if(is_empty(node) == 0) {
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}

void size_test() {
    list* node = NULL;
    push(&node, 10);
    push(&node, 20);
    push(&node, 30);

    int len = size(node);
    if(len > 0) {
        printf("len: %d\n", len);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}

void find_test() {
    list* node = NULL;
    push(&node, 10);
    push(&node, 20);
    push(&node, 30);

    list* elem = find(node, 10);
    if(elem != NULL) {
        printf("elem is %d\n", elem->value);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}

int main() {
    printf("TEST PUSH\n");
    push_test();
    printf("\n\nTEST POP\n");
    pop_test();
    printf("\n\nTEST IS_EMPTY\n");
    is_empty_test();
    printf("\n\nTEST SIZE\n");
    size_test();
    printf("\n\nTEST FIND\n");
    find_test();
}