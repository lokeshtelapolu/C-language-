#include <stdio.h>

// Function to find maximum of two numbers
int max(int num1, int num2) {
   return (num1 > num2) ? num1 : num2;
}

// Function to find minimum of two numbers
int min(int num1, int num2) {
   return (num1 < num2) ? num1 : num2;
}

int main() {
   int n, i, num, maximum, minimum;

   printf("Enter the number of elements you want to find the maximum and minimum: ");
   scanf("%d", &n);

   printf("Enter %d numbers:\n", n);

   // Initialize maximum and minimum with the first number
   scanf("%d", &num);
   maximum = num;
   minimum = num;

   for (i = 1; i < n; i++) {
      scanf("%d", &num);

      // Call max function to find maximum of two numbers
      maximum = max(maximum, num);

      // Call min function to find minimum of two numbers
      minimum = min(minimum, num);
   }

   printf("Maximum = %d\n", maximum);
   printf("Minimum = %d", minimum);

   return 0;
}

