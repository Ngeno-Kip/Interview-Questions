//Write a program that takes an integer as input and returns true if the input is a power of two

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    // A power of two has only one bit set in its binary representation
    // So, if n is a power of two, n & (n - 1) should be 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;
    
    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the input is a power of two
    if (isPowerOfTwo(number)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
