#include <stdio.h>

struct rectangle {
    float width;
    float height;
};

int main() {
    // Declare a variable of type "struct rectangle"
    struct rectangle myRect;

    // Prompt user for width and height
    printf("Enter the width of the rectangle: ");
    scanf("%f", &myRect.width);

    printf("Enter the height of the rectangle: ");
    scanf("%f", &myRect.height);

    // Calculate and print the area of the rectangle
    float area = myRect.width * myRect.height;
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
