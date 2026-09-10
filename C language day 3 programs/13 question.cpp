#include <stdio.h>

int findSum(int lower, int upper);

int main() {
    int lower, upper, sum;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    sum = findSum(lower, upper);
    printf("Sum of natural numbers from %d to %d = %d", lower, upper, sum);
    return 0;
}

int findSum(int lower, int upper) {
    if(lower == upper) {
        return lower;
    }
    else {
        return lower + findSum(lower + 1, upper);
    }
}
