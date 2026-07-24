#include <stdio.h>

int main() {
    int n, i;

    printf("--- Program 1: Array Input and Output ---\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Displaying the elements of the array
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
