#include <stdio.h>

int main() {
    int arr1[6] = {10, 20, 30, 40, 50, 60};
    int arr2[6] = {70, 80, 90, 100, 110, 120};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int size = size1 + size2;
    int arr3[size];
    
    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
    
    printf("Concatenated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    
    return 0;
}
