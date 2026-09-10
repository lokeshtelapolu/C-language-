#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct book b1;
    
    printf("Enter book title: ");
    scanf("%s", b1.title);
    
    printf("Enter book author: ");
    scanf("%s", b1.author);
    
    printf("Enter publication year: ");
    scanf("%d", &b1.year);
    
    printf("\nBook information:\n");
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Publication year: %d\n", b1.year);
    
    return 0;
}
