#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If list is empty or inserting at the start
    if (pos == 1 || *head == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    int i;
    for (i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // inserting nodes
    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 20, 2);
    insertAtPosition(&head, 30, 3);
    insertAtPosition(&head, 15, 2); // insert 15 at position 2

    printf("Linked List: ");
    display(head);

    return 0;
}
