#include <stdio.h>

// Recursive function to calculate Fibonacci number
int calcfibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: f(0) = 0
    } else if (n == 1) {
        return 1;  // Base case: f(1) = 1
    } else {
        return calcfibonacci(n - 1) + calcfibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int terms;  // Variable to store the number of terms

    // Prompt the user to enter the number of terms
    printf("Enter the no.of terms for Fibonacci series: ");
    scanf("%d", &terms);

    // Display the Fibonacci series up to the given number of terms
    printf("Fibonacci series of %d terms:\n", terms);

    // Print the Fibonacci sequence
    for (int i = 0; i < terms; i++) {
        printf("%d ", calcfibonacci(i));  // Print Fibonacci number for each term
    }

    printf("\n");

    return 0;
}

