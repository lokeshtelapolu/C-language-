#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int num) {
   int i;

   // Corner cases
   if (num <= 1)
      return 0;
   if (num == 2 || num == 3)
      return 1;

   // Check for divisibility by all odd numbers from 3 to sqrt(num)
   if (num % 2 == 0)
      return 0;
   for (i = 3; i <= sqrt(num); i += 2) {
      if (num % i == 0)
         return 0; // Not a prime number
   }

   return 1; // A prime number
}

// Function to find and display all the prime numbers in a given range
void findPrimesInRange(int lower, int upper) {
   int i;

   printf("Prime numbers between %d-%d are: ", lower, upper);
   for (i = lower; i <= upper; i++) {
      if (isPrime(i))
         printf("%d ", i);
   }
}

int main() {
   int lower, upper;

   printf("Enter the lower and upper limits: ");
   scanf("%d %d", &lower, &upper);

   findPrimesInRange(lower, upper);

   return 0;
}
