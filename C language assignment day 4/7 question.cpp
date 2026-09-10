#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int roll_no;
    char stud_name[100];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

void calculateMarks(struct Student *student) {
    student->total_marks = student->mark1 + student->mark2 + student->mark3;
    student->avg_marks = (float)student->total_marks / 3;
}

void displayStudents(struct Student students[], int n) {
    int i;

    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s\n", "Roll No", "Name", "Mark 1", "Mark 2", "Mark 3", "Total", "Average");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10d %-10d %-10d %-10d %-10.2f\n", students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }
}

void sortStudents(struct Student students[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    struct Student students[MAX_STUDENTS];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].stud_name);

        printf("Mark 1: ");
        scanf("%d", &students[i].mark1);

        printf("Mark 2: ");
        scanf("%d", &students[i].mark2);

        printf("Mark 3: ");
        scanf("%d", &students[i].mark3);

        calculateMarks(&students[i]);
    }

    sortStudents(students, n);
    displayStudents(students, n);

    return 0;
}
