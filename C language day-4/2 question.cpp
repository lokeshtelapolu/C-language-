#include <stdio.h>

union my_union {
    int integer;
    float floating_point;
};

int main() {
    union my_union u;
    u.integer = 42;
    u.floating_point = 3.14159;
    printf("The value of the integer field is %d\n", u.integer);
    printf("The value of the floating_point field is %f\n", u.floating_point);
    printf("The value of the union is %d\n", u.integer); // This will print the value of the integer field because it was the last field that was assigned a value
    return 0;
}
