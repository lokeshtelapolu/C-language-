#include <stdio.h>

int findSum(int lower, int upper, int type);

int main() {
    int lower, upper, type, sum;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("Enter the type of numbers (0 for even, 1 for odd): ");
    scanf("%d", &type);
    sum = findSum(lower, upper, type);
    if(type == 0) {
        printf("Sum of even numbers between %d to %d = %d", lower, upper, sum);
    }
    else {
        printf("Sum of odd numbers between %d to %d = %d", lower, upper, sum);
    }
    return 0;
}

int findSum(int lower, int upper, int type) {
    if(lower > upper) {
        return 0;
    }
    if(type == 0 && lower % 2 == 1) {
        lower++;
    }
    if(type == 1 && lower % 2 == 0) {
        lower++;
    }
    return lower + findSum(lower + 2, upper, type);
}
