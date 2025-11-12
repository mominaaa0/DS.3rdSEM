#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node* createLinkedList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int data, i;
    if (n <= 0) {
        printf("Number of nodes should be greater than zero.\n");
        return NULL;
    }
    printf("Enter data for node 1: ");
    scanf("%d", &data);
    head = createNode(data);
    temp = head;
    for (i = 2; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode = createNode(data);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) {
        printf("\nList is already empty. Nothing to delete.\n");
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    printf("\nDeleted node: %d\n", temp->data);
    free(temp);
    return head;
}
int main() {
    struct Node* head = NULL;
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = createLinkedList(n);
    printf("\nBefore deletion:\n");
    displayLinkedList(head);
    head = deleteFromBeginning(head);
    printf("\nAfter deletion:\n");
    displayLinkedList(head);
    return 0;
}

