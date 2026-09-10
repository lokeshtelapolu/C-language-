#include <stdio.h>

// Function to find diameter of circle
float diameter(float radius) {
   return 2 * radius;
}

// Function to find circumference of circle
float circumference(float radius) {
   return 2 * 3.14159265359 * radius;
}

// Function to find area of circle
float area(float radius) {
   return 3.14159265359 * radius * radius;
}

int main() {
   float radius;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   printf("Diameter = %.2f units\n", diameter(radius));
   printf("Circumference = %.2f units\n", circumference(radius));
   printf("Area = %.2f sq. units", area(radius));

   return 0;
}
