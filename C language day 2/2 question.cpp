#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Sorting the array in descending order
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int second_largest = arr[1], second_smallest = arr[n-2];
    float avg = (float)(second_largest + second_smallest) / 2;
    int flag = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("The average of second largest and second smallest element, %0.2f, is present in the array.\n", avg);
    }
    else {
        printf("The average of second largest and second smallest element, %0.2f, is not present in the array.\n", avg);
    }
    return 0;
}

