#include "LAB6head.h"
#include <stdio.h>

int main() {
    const char *filename = "Peter Griffin.txt";

    // Writing to a file
    const char *contentToWrite = "The guy from Fortnite.";

    if (writeToFile(filename, contentToWrite)) {
        printf("File successfully written.\n");
    } else {
        printf("Error writing to the file: %s\n");
    }

    // Reading from a file
    if (fileExists(filename)) {
        char *readContent = readFromFile(filename);
        if (readContent) {
            printf("File content:\n%s", readContent);
            free(readContent);
        } else {
            fprintf(stderr, "Error reading from the file: %s\n", filename);
        }
    } else {
        printf("File does not exist: %s\n", filename);
    }

    return 0;
}
