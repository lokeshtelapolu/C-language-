#include <stdio.h>

struct person {
    char name[100];
    int age;
    float height;
}p;

int main() {
    // Create a new person
    struct person p = {"John Doe", 25, 5.11};

    // Print their information
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);

    return 0;
}




