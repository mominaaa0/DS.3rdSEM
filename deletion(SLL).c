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
struct Node* deleteFromPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("\nList is empty. Nothing to delete.\n");
        return NULL;
    }
    if (position <= 0) {
        printf("\nInvalid position!\n");
        return head;
    }
    struct Node *temp = head, *prev = NULL;
    int i;
    if (position == 1) {
        head = head->next;
        printf("\nDeleted node: %d (Position %d)\n", temp->data, position);
        free(temp);
        return head;
    }
    for (i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("\nPosition out of range!\n");
        return head;
    }
    prev->next = temp->next;
    printf("\nDeleted node: %d (Position %d)\n", temp->data, position);
    free(temp);
    return head;
}
int main() {
    struct Node* head = NULL;
    int n, pos;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = createLinkedList(n);
    printf("\nBefore deletion:\n");
    displayLinkedList(head);
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);
    head = deleteFromPosition(head, pos);
    printf("\nAfter deletion:\n");
    displayLinkedList(head);
    return 0;
}
