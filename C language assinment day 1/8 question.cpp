#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(; num != 0; num /= 10) {
        sum += num % 10;
    }
    
    printf("The sum of the digits of the number is: %d\n", sum);
    
    return 0;
}
