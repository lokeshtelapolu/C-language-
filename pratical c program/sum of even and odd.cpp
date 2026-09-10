#include <stdio.h>

int main() {
    int n, even_sum = 0, odd_sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } else {
            odd_sum += i;
        }
    }
    
    printf("Sum of even numbers from 1 to %d is %d\n", n, even_sum);
    printf("Sum of odd numbers from 1 to %d is %d\n", n, odd_sum);
    
    return 0;
}
