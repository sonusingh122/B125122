#include <stdio.h>

struct book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\n----- Book Details -----\n");
    printf("Book ID     : %d\n", b.book_id);
    printf("Title       : %s\n", b.title);
    printf("Author Name : %s\n", b.author);
    printf("Price       : %.2f\n", b.price);

    return 0;
}