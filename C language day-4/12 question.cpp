#include <stdio.h>

// Define the student structure
struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    // Declare an array of three student variables
    struct student students[2];

    // Prompt the user to enter information for each student
    for (int i = 0; i < 2; i++) {
        printf("Enter information for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Display the information for all three students
    printf("\nInformation for all students:\n");
    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("\n");
    }

    return 0;
}
