#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers using call by reference
/*

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp; }
int main() {
    int num1, num2;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &num1, &num2);
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);
    // Call the swap function to swap the values of num1 and num2
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0; }
-----------------------------------------------------------------------------
#include <stdio.h>

void ReverseString(const char *str) {
    if (str == NULL)
        return;

    // Calculate the length of the string
    const char *end = str;
    while (*end != '\0') {
        end++;
    }

    // Moving the pointer back to the last character
    end--;

    // Print the string in reverse order
    while (end >= str) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main() {
    const char *inp = "This is C programming";
    printf("Original string: %s\n", inp);
    printf("String in reverse: ");
    ReverseString(inp);

    return 0;
}
----------------------------------------------------------------

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);}

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));}
    return 0;}
-----------------------------------------------------------------

#include <stdio.h>

int search(const int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == target) {
            return i;  }}
    return -1;  }
int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);}
    printf("Enter the element to search: ");
    scanf("%d", &target);
    // Search for the element in the array
    int index = search(ptr, n, target);
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);}
    return 0;}
---------------------------------------------------------------------
*/
#include <stdio.h>

void addMatrices(int *res, int *mat1, int *mat2, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(res + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);}}}
void displayMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(mat + i * cols + j)); }
        printf("\n"); }}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns in the matrices: ");
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols], res[rows][cols];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);}}
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);}}
    // Add the matrices using pointers
    addMatrices((int *)res, (int *)mat1, (int *)mat2, rows, cols);
    printf("Resultant matrix:\n");
    displayMatrix((int *)res, rows, cols);
    return 0;
}










