#include <stdio.h>

// Function to check whether a number is even or odd
int isEven(int num) {
   if (num % 2 == 0)
      return 1; // 1 indicates that the number is even
   else
      return 0; // 0 indicates that the number is odd
}

int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (isEven(num))
      printf("%d is even", num);
   else
      printf("%d is odd", num);

   return 0;
}
