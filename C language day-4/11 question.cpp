#include <stdio.h>

// Define the student structure
struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    // Declare a student variable and initialize its fields
    struct student s = {"John Doe", 12345, 3.5};

    // Print out the student's information
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("GPA: %.2f\n", s.gpa);

    return 0;
}
