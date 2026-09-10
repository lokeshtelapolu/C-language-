#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 1000
#define MAX_SEARCH_STRING_LENGTH 100

int main() {
    FILE *file;
    char filename[MAX_FILENAME_LENGTH], search_string[MAX_SEARCH_STRING_LENGTH], line[MAX_LINE_LENGTH];

    // prompt user for filename and search string
    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter search string: ");
    scanf("%s", search_string);

    // open file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }

    // read file line by line and print lines containing search string
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    // close file
    fclose(file);

    return 0;
}
