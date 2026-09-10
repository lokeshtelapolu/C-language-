#include <stdio.h>

int main() {
    int n, i;
    long long int f1 = 0, f2 = 1, fn;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("The first %d Fibonacci numbers are:\n", n);

    for (i = 0; i < n; i++) {
        printf("%lld ", f1);
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    return 0;
}
