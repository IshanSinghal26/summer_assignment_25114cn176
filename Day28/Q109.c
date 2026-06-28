#include <stdio.h>
#include <string.h>

struct Library {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Library books[100];
    int n, i, choice, searchId;
    int count = 0;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[count].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[count].author);

                count++;
                printf("Book added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("\nBook ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++) {
                    if (books[i].id == searchId) {
                        printf("\nBook Found:\n");
                        printf("Book ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        break;
                    }
                }

                if (i == count) {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}