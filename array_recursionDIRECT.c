// 08/09/25
#include <stdio.h>
void printArray(int arr[], int n, int index) {
    if (index == n)  
        return;
    printf("%d ", arr[index]); 
    printArray(arr, n, index + 1);
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    printArray(arr, n, 0);
    return 0;
}