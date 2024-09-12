#include <stdio.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = 0;

void push(int item) {
    if (stack[top] == STACK_SIZE - 1) {
        printf("Stack is full\n");
    } else {
        stack[top] = item;
        top++;
    }
}

void pop() {
    if (top == 0) return;
    stack[top] = 0;
    top--;
}

void display() {
    if (top == 0) return;
    for (int i = 0; i < top; i++) {
        printf("[%d] -> ", stack[i]);
    }
    printf("\n");
}

void peek() {
    if (top == 0) return;
    printf("peek [%d] \n", stack[top]);
}


void main(void)
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    display();
    pop();
    pop();
    peek();
    pop();
    display();
}
