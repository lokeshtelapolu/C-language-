#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

int main() {
    FILE *file;
    char buffer[BUFFER_SIZE];
    int n;

    // open binary file for reading
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error: could not open binary file\n");
        return 1;
    }

    // read data from file and print to console
    while ((n = fread(buffer, 1, BUFFER_SIZE, file)) > 0) {
        for (int i = 0; i < n; i++) {
            printf("%02x ", buffer[i]);
        }
        printf("\n");
    }

    // close file
    fclose(file);

    return 0;
}
