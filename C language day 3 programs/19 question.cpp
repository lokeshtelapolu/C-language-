#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    
    printf("Input array size: ");
    scanf("%d", &n);
    
    printf("Input elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", *(arr + i));
        if (i != n - 1) {
            printf(", ");
        }
    }
    
    return 0;
}
