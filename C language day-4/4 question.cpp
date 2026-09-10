#include <stdio.h>

union my_data {
  int integer;
  float floating_point;
};

int main() {
  union my_data data;
  float input;

  printf("Enter a value: ");
  scanf("%f", &input);

  // Check if input is an integer
  if (input == (int)input) {
    data.integer = (int)input;
    printf("Value is an integer: %d\n", data.integer);
  } 
  // Input is a floating-point number
  else {
    data.floating_point = input;
    printf("Value is a floating-point number: %f\n", data.floating_point);
  }

  return 0;
}
