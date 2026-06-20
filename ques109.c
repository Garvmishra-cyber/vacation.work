//question109
#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", book[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", book[i].author);
    }

    // Display book records
    printf("\n===== LIBRARY RECORDS =====\n");
    printf("ID\tTitle\t\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\n",
               book[i].bookId,
               book[i].title,
               book[i].author);
    }

    return 0;
}