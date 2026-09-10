#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The diagonal elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}

