#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *input_file, *output_file;
    char line[MAX_LINE_LENGTH], *ptr;

    // open input file for reading
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: could not open input file\n");
        return 1;
    }

    // open output file for writing
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error: could not open output file\n");
        return 1;
    }

    // read input file line by line and replace "red" with "blue"
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        while ((ptr = strstr(line, "red")) != NULL) {
            // copy the part before the word "red"
            fwrite(line, 1, ptr - line, output_file);

            // write the word "blue"
            fwrite("blue", 1, 4, output_file);

            // move the pointer past the word "red"
            line = ptr + 3;
        }
        // write the rest of the line
        fwrite(line, 1, strlen(line), output_file);
    }

    // close files
    fclose(input_file);
    fclose(output_file);

    return 0;
}
