#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    //Open a file in write mode
    FILE*file = fopen("greetings.txt","w");  //Changing mode

    //Check if the file was successfully opened
    if(file==NULL){
        perror("ERROR OPENING FILE");
        return 1; //RETURN AN ERROR CODE

    //Write to the file
    fprintf(file,"HELLO");

    //Close the file
    fclose(file);

    FILE*file = fopen("greetings.txt","r");
    //Read and print each line from the file
    char line=[500];
    while(fgets(line,sizeof(line),file) != NULL){
        printf("Read from the file:%s",line);
    }
    fclose(file);
}
//--------------------------------------------------------------
int main(){
    //Open a file in write mode
    FILE*file = fopen("EXAMPLE.txt","a");  //Changing mode

    //Check if the file was successfully opened
    if(file==NULL){
        perror("eRROR OPENING FILE");
        return 1; //RETURN AN ERROR CODE

    }
    //Append text to the file
    fprintf(file,"This line is appended to the file.\n");

    //Close the file
    fclose(file);
}
*/
/*
#include <stdio.h>

// Function to add a task to the to-do list file
void addTaskToFile(const char* task) {
    FILE*file = fopen("TO DO LIST.txt","w");
    //Check if the file was successfully opened
    if(file==NULL){
        perror("ERROR OPENING FILE");
        return 1; //RETURN AN ERROR CODE

    fprintf(file,"task.\n");

}

// Function to display the current to-do list from the file
void displayToDoList() {

}
//-------------------------------------------------------------------------------------
int main() {
    int choice;
    char task[1000];

    do {
        printf("\nTo-Do List Management\n");
        printf("1. Add Task\n");
        printf("2. View To-Do List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the task: ");
                getchar(); // Consume the newline character left in the buffer
                //fgets is used to read a line of text from the standard input (stdin).
                //The fgets function reads characters from the specified input stream
                //until it encounters a newline character ('\n') or reaches the specified
                //limit of characters
                fgets(task, sizeof(task), stdin);
                addTaskToFile(task);
                printf("Task added to the to-do list.\n");
                break;

            case 2:
                displayToDoList();
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}*/
//-----------------------------------------------------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

// Structure to represent a student record
typedef struct {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    float marks;
} Student;

// Function to add a student record to the file
void addStudentToFile(const char *fileName, const Student *student) {
    FILE *file = fopen(fileName, "a"); // Use "a" to append to the file
    // Check if the file was successfully opened
    if (file == NULL) {
        perror("ERROR OPENING FILE");
        return;
    }
    fprintf(file, "%s %d %f\n", student->name, student->rollNumber, student->marks);
    fclose(file);
}

// Function to display the current student records from the file
void displayStudentRecords(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    // Check if the file was successfully opened
    if (file == NULL) {
        perror("ERROR OPENING FILE");
        return;
    }
    char line[500];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("Read from the file: %s", line);
    }
    fclose(file);
}

int main() {
    const char *fileName = "students.txt";
    Student student;
    int choice;

    do {
        printf("\nStudent Record Management\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf("%s", student.name);
                printf("Enter student roll number: ");
                scanf("%d", &student.rollNumber);
                printf("Enter student marks: ");
                scanf("%f", &student.marks);
                addStudentToFile(fileName, &student);
                printf("Student record added.\n");
                break;

            case 2:
                displayStudentRecords(fileName);
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}
*/
FILE *stream;
stream = fopen("lab6.txt","w");
fputs("This is a test", stream);
fseek(stream, 7, SEEK_SET );
fputs(" test for lab6 fseek function", stream);
fclose(stream);
