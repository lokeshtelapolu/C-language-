#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

void printArmstrongNumbers(int lower, int upper) {
    int i, num;
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(isArmstrong(i)) {
            printf("%d ", i);
        }
    }
}

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (num == sum);
}

int main() {
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printArmstrongNumbers(lower, upper);
    return 0;
}
