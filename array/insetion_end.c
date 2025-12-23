#include <stdio.h>
int main() {
    int arr[100], n, i, newElement;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert at end: ");
    scanf("%d", &newElement);
    arr[n] = newElement;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
