#include <stdio.h>

int main() {
    char name[50];

    // Ask for user input
    printf("Enter your name: ");
    scanf("%s", name);

    // Print the user's name
    printf("Hello, %s!\n", name);
    
    return 0;
}

