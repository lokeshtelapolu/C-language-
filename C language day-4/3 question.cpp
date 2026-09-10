#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    float price;
}books;

int main() {
    struct book books[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter information for book %d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, 100, stdin);
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // to consume the newline character
    }

    printf("\nBook Information:\n");
    for (i = 0; i < 2; i++) {
        printf("Book %d: Title: %sAuthor: %sPrice: $%.2f\n", i+1, books[i].title, books[i].author, books[i].price);
    }

    return 0;
}
