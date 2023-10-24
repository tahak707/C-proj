#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the Fibonacci series up to the nth number
void printFibonacciSeries(int n) {
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return;
    }

    printf("Fibonacci Series up to the %dth number: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printFibonacciSeries(n);

    return 0;
}

