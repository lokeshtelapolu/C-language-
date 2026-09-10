#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Enter no. of elements in an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum of an array: %d\n", max);
    printf("Minimum of an array: %d\n", min);
    return 0;
}

