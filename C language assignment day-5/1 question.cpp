#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *input_file, *error_file;
    char line[MAX_LINE_LENGTH];

    // open input file for reading
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: could not open input file\n");
        return 1;
    }

    // open error file for writing
    error_file = fopen("error_log.txt", "w");
    if (error_file == NULL) {
        printf("Error: could not open error file\n");
        return 1;
    }

    // read input file line by line and write errors to error file
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        if (strstr(line, "error") != NULL) {
            fputs(line, error_file);
        }
    }

    // close files
    fclose(input_file);
    fclose(error_file);

    // print error file contents to console
    printf("Errors found:\n");
    error_file = fopen("error_log.txt", "r");
    if (error_file == NULL) {
        printf("Error: could not open error file\n");
        return 1;
    }
    while (fgets(line, MAX_LINE_LENGTH, error_file) != NULL) {
        printf("%s", line);
    }
    fclose(error_file);

    return 0;
}
