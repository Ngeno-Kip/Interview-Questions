//Write a program that counts the number of vowels in a sentence

#include <stdio.h>
#include <ctype.h>

int countVowels(const char *sentence) {
    int vowelCount = 0;

    while (*sentence) {
        char currentChar = tolower(*sentence);

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            vowelCount++;
        }

        sentence++;
    }

    return vowelCount;
}

int main() {
    char sentence[100];

    // Input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count vowels in the sentence
    int result = countVowels(sentence);

    // Output the result
    printf("Number of vowels: %d\n", result);

    return 0;
}
