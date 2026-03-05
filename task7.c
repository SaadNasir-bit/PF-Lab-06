#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\t\tLibrary Menu \n");
        printf("1.Issue Book\n");
        printf("2.Return Book\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Book issued successfully.\n");
        }
        else if (choice == 2) {
            printf("Book returned successfully.\n");
        }
        else if (choice == 3) {
            printf("Exiting.\n");
        }
        else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
