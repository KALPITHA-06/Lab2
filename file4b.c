#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Output the result
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}

