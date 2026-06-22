//question118
#include <stdio.h>
#include <string.h>

int main() {
    int choice, n = 0, i, searchId;
    int bookId[100];
    char title[100][50];
    char author[100][50];

    do {
        printf("\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\n");
                    printf("----------------------------------------\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\n",
                               bookId[i], title[i], author[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        printf("\nBook Found:\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID to Delete: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        int j;
                        for(j = i; j < n - 1; j++) {
                            bookId[j] = bookId[j + 1];
                            strcpy(title[j], title[j + 1]);
                            strcpy(author[j], author[j + 1]);
                        }
                        n--;
                        printf("Book Deleted Successfully!\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}