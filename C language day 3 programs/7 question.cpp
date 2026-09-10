#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
   int i, fact = 1;

   for (i = 2; i <= num; i++) {
      fact *= i;
   }

   return fact;
}

// Function to check whether a number is a strong number or not
int isStrong(int num) {
   int temp = num, sum = 0, rem;

   while (temp > 0) {
      rem = temp % 10;
      sum += factorial(rem);
      temp /= 10;
   }

   return (sum == num); // Returns 1 if number is a strong number, otherwise 0
}

// Function to find and display all the strong numbers in a given range
void findStrongNumbersInRange(int lower, int upper) {
   int i;

   printf("Strong numbers between %d-%d are: ", lower, upper);
   for (i = lower; i <= upper; i++) {
      if (isStrong(i))
         printf("%d ", i);
   }
}

int main() {
   int lower, upper;

   printf("Enter the lower and upper limits: ");
   scanf("%d %d", &lower, &upper);

   findStrongNumbersInRange(lower, upper);

   return 0;
}
