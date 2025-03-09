

#include <stdio.h>
// Recursive function to check if a number is prime
int checkprime(int n, int i) {
    if (n <= 1)  
        return 0; // Not prime
    if (i == 1)  
        return 1; // Prime (no divisors found)
    if (n % i == 0)  
        return 0; // Not prime
    
    return checkprime(n, i - 1); // Check next divisor
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkprime(n, n - 1))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);
    return 0;
}
