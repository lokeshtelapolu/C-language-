#include <stdio.h>
#include <string.h>

void trim(char* str) {
    int i, j;
    // Remove leading white space characters
    while (str[0] == ' ') {
        for (i = 0; i < strlen(str); i++) {
            str[i] = str[i+1];
        }
    }
    // Remove trailing white space characters
    while (str[strlen(str)-1] == ' ') {
        str[strlen(str)-1] = '\0';
    }
}

int main() {
    char str[1000];
    printf("Input string: ");
    fgets(str, 1000, stdin);
    trim(str);
    printf("String after removing leading and trailing white spaces: \n%s", str);
    return 0;
}

