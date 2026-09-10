#include <stdio.h>

int main() {
    int n, i, element, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (containing only two different elements): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (count == 0 || element == arr[i]) {
            element = arr[i];
            count++;
        }
        else {
            count--;
        }
    }
    printf("The odd element is: %d\n", element);
    return 0;
}

