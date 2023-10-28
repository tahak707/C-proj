#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the Fibonacci series up to the nth number
void printFib(int n, current) {
    if (current<=n){printf("%d",fibonacci(current));
        printFib(n, current+1);
}}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return;
    }

else{     printf("Fibonacci Series up to the %dth number: ", n);
    printFib(n,0);
     printf("/n")

    return 0;
}

