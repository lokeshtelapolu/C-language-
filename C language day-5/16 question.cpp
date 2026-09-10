#include <stdio.h>

int is_prime(int n, int i);

int main() {
    int num;
    
    printf("Enter any positive number: ");
    scanf("%d", &num);
    
    if (is_prime(num, num/2) == 1) {
        printf("The number %d is a prime number.", num);
    } else {
        printf("The number %d is not a prime number.", num);
    }
    
    return 0;
}

int is_prime(int n, int i) {
    if (i == 1) {
        return 1;
    } else {
        if (n % i == 0) {
            return 0;
        } else {
            return is_prime(n, i-1);
        }
    }
}
