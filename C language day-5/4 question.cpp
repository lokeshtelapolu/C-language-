#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isalpha(ch)) {
        printf("This is an alphabet.\n");
    } else if (isdigit(ch)) {
        printf("This is a digit.\n");
    } else {
        printf("This is a special character.\n");
    }
    
    return 0;
}
