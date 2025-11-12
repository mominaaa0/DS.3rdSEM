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
struct Node* reverseLinkedList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->next;  
        current->next = prev;   
        prev = current;         
        current = next;         
    }
    head = prev;
    return head;
}
int main() {
    struct Node* head = NULL;
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = createLinkedList(n);
    printf("\nOriginal Linked List:\n");
    displayLinkedList(head);
    head = reverseLinkedList(head);
    printf("\nReversed Linked List:\n");
    displayLinkedList(head);
    return 0;
}
