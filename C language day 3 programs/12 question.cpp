#include <stdio.h>

void printEvenNumbers(int lower, int upper);
void printOddNumbers(int lower, int upper);

int main() {
    int lower, upper, choice;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("Enter 1 to print even numbers or 2 to print odd numbers: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Even numbers between %d and %d: ", lower, upper);
        printEvenNumbers(lower, upper);
    }
    else if(choice == 2) {
        printf("Odd numbers between %d and %d: ", lower, upper);
        printOddNumbers(lower, upper);
    }
    else {
        printf("Invalid choice!");
    }
    return 0;
}

void printEvenNumbers(int lower, int upper) {
    if(lower <= upper) {
        if(lower % 2 == 0) {
            printf("%d ", lower);
        }
        printEvenNumbers(lower + 1, upper);
    }
}

void printOddNumbers(int lower, int upper) {
    if(lower <= upper) {
        if(lower % 2 != 0) {
            printf("%d ", lower);
        }
        printOddNumbers(lower + 1, upper);
    }
}
