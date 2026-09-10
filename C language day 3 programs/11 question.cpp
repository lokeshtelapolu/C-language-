#include <stdio.h>

void printNaturalNumbers(int lower, int upper);

int main() {
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("Natural numbers between %d and %d: ", lower, upper);
    printNaturalNumbers(lower, upper);
    return 0;
}

void printNaturalNumbers(int lower, int upper) {
    if(lower <= upper) {
        printf("%d ", lower);
        printNaturalNumbers(lower + 1, upper);
    }
}
