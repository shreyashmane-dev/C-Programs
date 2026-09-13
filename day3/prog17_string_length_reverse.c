#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    printf("--- Program 17: Character Array (String) Length and Reversal ---\n");
    printf("Enter a string (single word or line without spaces): ");
    scanf("%99s", str);

    // Calculating length manually without strlen()
    while (str[length] != '\0') {
        length++;
    }

    printf("\nLength of the string = %d characters\n", length);

    // Reversing the string using character array swap
    char reversed[100];
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Add null-terminator

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
