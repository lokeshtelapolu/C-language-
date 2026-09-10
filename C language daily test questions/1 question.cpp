#include <stdio.h>

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum += my_array[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
