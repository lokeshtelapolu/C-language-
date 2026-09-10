#include <stdio.h>

int main() {
    int n, i, index;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Invalid index.\n");
        return 0;
    }
    for (i = index; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("The array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

