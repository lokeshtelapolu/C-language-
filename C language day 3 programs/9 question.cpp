#include <stdio.h>

int isPerfect(int num);

void printPerfectNumbers(int lower, int upper) {
    int i;
    printf("Perfect numbers between %d and %d are: ", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(isPerfect(i)) {
            printf("%d ", i);
        }
    }
}

int isPerfect(int num) {
    int sum = 0, i;
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printPerfectNumbers(lower, upper);
    return 0;
}
