#include <stdio.h>
int main() {
    int arr[100], n, pos, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position (1 to %d) to delete: ", n);
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
