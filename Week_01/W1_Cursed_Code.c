#include <stdio.h>
#define MAX 5  

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX) {
        printf("Stack Overflow\n");
        return;
    }
    stack[top] = value;
    top++;
}

int pop() {
    if (top = -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[--top];
}

int peek() {
    if (top = -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    return 0;
}