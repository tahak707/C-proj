#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
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
*/
//------------------------------------------------------------------------------------------------------------------------
//Q2
#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
void append(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to merge two sorted linked lists
struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
    struct Node* result = NULL;

    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    }

    if (list1->data <= list2->data) {
        result = list1;
        result->next = mergeSortedLists(list1->next, list2);
    } else {
        result = list2;
        result->next = mergeSortedLists(list1, list2->next);
    }

    return result;
}

// Function to print a linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function to test the merging of two sorted linked lists
int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    struct Node* mergedList = NULL;

    // Insert elements into the first sorted linked list
    append(&list1, 1);
    append(&list1, 3);
    append(&list1, 5);

    // Insert elements into the second sorted linked list
    append(&list2, 2);
    append(&list2, 4);
    append(&list2, 6);

    // Display the original lists
    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    // Merge the sorted linked lists
    mergedList = mergeSortedLists(list1, list2);

    // Display the merged list
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
//---------------------------------------------------------------------------------
//Q3
#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
void append(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to convert a linked list to an array
int* convertListToArray(struct Node* head, int* size) {
    if (head == NULL) {
        *size = 0;
        return NULL;
    }

    // Count the number of elements in the linked list
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    // Create an array of the same size as the linked list
    int* array = (int*)malloc(count * sizeof(int));
    *size = count;

    // Copy elements from the linked list to the array
    current = head;
    for (int i = 0; i < count; i++) {
        array[i] = current->data;
        current = current->next;
    }

    return array;
}

// Main function to test converting a linked list to an array
int main() {
    struct Node* list = NULL;

    // Insert elements into the linked list
    append(&list, 1);
    append(&list, 2);
    append(&list, 3);
    append(&list, 4);
    append(&list, 5);

    // Display the original linked list
    printf("Linked List: ");
    struct Node* current = list;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Convert the linked list to an array
    int size;
    int* array = convertListToArray(list, &size);

    // Display the resulting array
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the memory allocated for the array
    free(array);

    return 0;
}
//--------------------------------------------------------------
//Q4
#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
void append(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to remove elements with odd indices from a linked list
void removeOddIndices(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return; // Nothing to remove for an empty or single-element list
    }

    struct Node* current = *head;
    struct Node* prev = NULL;
    int index = 0;

    while (current != NULL) {
        if (index % 2 != 0) {
            // Remove the node at odd index
            prev->next = current->next;
            free(current);
            current = prev->next;
        } else {
            prev = current;
            current = current->next;
        }
        index++;
    }
}

// Function to print a linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function to test removing elements with odd indices
int main() {
    struct Node* list = NULL;

    // Insert elements into the linked list
    append(&list, 1);
    append(&list, 2);
    append(&list, 3);
    append(&list, 4);
    append(&list, 5);

    // Display the original linked list
    printf("Original List: ");
    printList(list);

    // Remove elements with odd indices
    removeOddIndices(&list);

    // Display the modified list
    printf("List after removing elements with odd indices: ");
    printList(list);

    // Free the memory allocated for the linked list
    while (list != NULL) {
        struct Node* temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}


































