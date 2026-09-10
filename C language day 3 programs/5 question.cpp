#include <stdio.h>
#include <math.h>

// Function to check whether a number is prime
int isPrime(int num) {
   int i;

   // Corner case
   if (num <= 1)
      return 0;

   // Check from 2 to sqrt(n)
   for (i = 2; i <= sqrt(num); i++) {
      if (num % i == 0)
         return 0; // Not a prime number
   }

   return 1; // A prime number
}

// Function to check whether a number is Armstrong
int isArmstrong(int num) {
   int sum = 0, temp = num, n = 0;

   // Find the number of digits
   while (temp != 0) {
      n++;
      temp /= 10;
   }

   temp = num;

   // Calculate the sum of cubes of digits
   while (temp != 0) {
      int digit = temp % 10;
      sum += pow(digit, n);
      temp /= 10;
   }

   if (sum == num)
      return 1; // An Armstrong number
   else
      return 0; // Not an Armstrong number
}

// Function to check whether a number is perfect
int isPerfect(int num) {
   int i, sum = 0;

   // Check all the divisors except itself
   for (i = 1; i <= num / 2; i++) {
      if (num % i == 0)
         sum += i;
   }

   if (sum == num)
      return 1; // A perfect number
   else
      return 0; // Not a perfect number
}

int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (isPrime(num))
      printf("%d is a prime number\n", num);
   else
      printf("%d is not a prime number\n", num);

   if (isArmstrong(num))
      printf("%d is an Armstrong number\n", num);
   else
      printf("%d is not an Armstrong number\n", num);

   if (isPerfect(num))
      printf("%d is a perfect number", num);
   else
      printf("%d is not a perfect number", num);

   return 0;
}
