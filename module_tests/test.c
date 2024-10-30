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

int main() {
    push_test();
}