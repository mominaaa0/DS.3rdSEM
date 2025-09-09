// reduce the size of array by 1
#include <stdio.h>
int main() {
    int arr[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n <= 0) {
        printf("Array is empty, deletion not possible.\n");
    } else {
        n--;
    }
    printf("Array after deletion at end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}