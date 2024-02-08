//Write a program that takes an integer as input and returns true if the input is a power of two.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeFirstLetter(char *str) {
    int length = strlen(str);

    // Capitalize the first letter of the string
    if (length > 0) {
        str[0] = toupper(str[0]);
    }

    // Capitalize the first letter of each word
    for (int i = 1; i < length; i++) {
        if ((str[i - 1] == ' ' || str[i - 1] == '\n') && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char input[100];

    // Input
    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove newline character from input
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Capitalize the first letter of each word
        capitalizeFirstLetter(input);

        // Output the result
        printf("Result: %s\n", input);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
