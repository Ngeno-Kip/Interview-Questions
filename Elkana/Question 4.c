//Write a program that takes an integer as input and returns an integer with reversed digit 
//ordering

#include <stdio.h>

int reverseDigits(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int input, result;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &input);

    // Reverse the digits
    result = reverseDigits(input);

    // Output the result
    printf("Reversed integer: %d\n", result);

    return 0;
}
