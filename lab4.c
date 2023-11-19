#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store contact information
struct Contact {
    char name[50];
    char email[100];
    char phone[15];
};

int main() {
    struct Contact *addressBook = NULL;
    int numContacts = 0;
    int maxContacts = 0;

    while (1) {
        printf("Address Book Menu:\n");
        printf("1. Add a contact\n");
        printf("2. View contacts\n");
        printf("3. Delete a contact\n");
        printf("4. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add a contact
                if (numContacts >= maxContacts) {
                    maxContacts = (maxContacts == 0) ? 1 : maxContacts * 2; // Double the size
                    addressBook = (struct Contact *)realloc(addressBook, maxContacts * sizeof(struct Contact));
                    if (addressBook == NULL) {
                        printf("Memory allocation failed.\n");
                        exit(1);
                    }
                }

                struct Contact newContact;
                printf("Enter name: ");
                scanf(" %[^\n]", newContact.name); // Read with spaces
                printf("Enter email: ");
                scanf(" %[^\n]", newContact.email);
                printf("Enter phone number: ");
                scanf(" %[^\n]", newContact.phone);

                addressBook[numContacts] = newContact;
                numContacts++;
                break;

            case 2: // View contacts
                if (numContacts > 0) {
                    printf("Contacts:\n");
                    for (int i = 0; i < numContacts; i++) {
                        printf("Name: %s\n", addressBook[i].name);
                        printf("Email: %s\n", addressBook[i].email);
                        printf("Phone: %s\n\n", addressBook[i].phone);
                    }
                } else {
                    printf("Address book is empty.\n");
                }
                break;

            case 3: // Delete a contact
                if (numContacts > 0) {
                    int index;
                    printf("Enter the index of the contact to delete (0-%d): ", numContacts - 1);
                    scanf("%d", &index);

                    if (index < 0 || index >= numContacts) {
                        printf("Invalid index.\n");
                    } else {
                        // Shift elements to the left to overwrite the deleted contact
                        for (int i = index; i < numContacts - 1; i++) {
                            addressBook[i] = addressBook[i + 1];
                        }
                        numContacts--;

                        // Resize the dynamic array if it's too large
                        if (numContacts < maxContacts / 2) {
                            maxContacts /= 2;
                            addressBook = (struct Contact *)realloc(addressBook, maxContacts * sizeof(struct Contact));
                        }
                    }
                } else {
                    printf("Address book is empty.\n");
                }
                break;

            case 4: // Exit
                free(addressBook); // Free dynamically allocated memory
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
