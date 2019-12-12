#include <stdio.h>
#include "headers/implementation.h"

int top = -1;
int stack[STACK_SIZE];

void init() {
    push(3);
    push(4);
    push(3);
    push(4);
    pop();
    printf("Top ELement = %d\n", peek());
    traverse();
}

void push(int element) {
    if (!isFull()) {
        top++;
        stack[top] = element;
    } else {
        printf("Stack is Full");
    }
}

int pop() {
    if (!isEmpty()) {
        top--;
        return top;
    } else {
        printf("Stack is Empty");
        return 0;
    }
}

int isFull() {
    if (top == STACK_SIZE - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int peek() {
    return stack[top];
}

void traverse() {
    int i;
    printf("\nStack\n======\n");
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}