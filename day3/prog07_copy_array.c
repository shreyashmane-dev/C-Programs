#include <stdio.h>

int main() {
    int n, i;

    printf("--- Program 7: Copy Elements from One Array to Another ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int source[n];
    int destination[n];

    printf("Enter %d numbers for source array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    // Copying elements
    for (i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    // Printing both arrays to verify
    printf("\nSource array:      ");
    for (i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }

    printf("\nDestination array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
