#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void pop() {
    if (top == -1)
        printf("Underflow! Stack is empty.\n");
    else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

int main() {
    int i;
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Initial Stack: ");
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");

    pop();
    pop();
    pop();
    pop();  

    return 0;
}
