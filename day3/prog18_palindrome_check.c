#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int is_palindrome = 1;

    printf("--- Program 18: Palindrome Check Using Character Array ---\n");
    printf("Enter a word: ");
    scanf("%99s", str);

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Check characters from start and end
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome) {
        printf("\n\"%s\" is a PALINDROME!\n", str);
    } else {
        printf("\n\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
