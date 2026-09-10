#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, vowels;

    printf("Enter a statement: ");
    fgets(str, 100, stdin);

    vowels = 0;
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("Number of vowels = %d", vowels);

    return 0;
}
