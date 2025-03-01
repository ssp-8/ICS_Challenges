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
    push(142);
    push(250);
    push(206);
    push(110);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    return 0;
}