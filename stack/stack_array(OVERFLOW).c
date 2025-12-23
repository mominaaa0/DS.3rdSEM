#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Overflow! Stack is full.\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

void display() {
    if (top == -1)
        printf("Stack is empty.\n");
    else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int value, i;
    for (i = 0; i < 6; i++) {  
        printf("Enter value to push: ");
        scanf("%d", &value);
        push(value);
    }
    display();
    return 0;
}
