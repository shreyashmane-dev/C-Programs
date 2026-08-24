#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, value;

    printf("--- Program 10: Insert Element at Specific Position ---\n");
    printf("Enter initial number of elements (max 99): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);
    printf("Enter the position where to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter position between 1 and %d.\n", n + 1);
        return 1;
    }

    // Shift elements to the right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element (pos - 1 for 0-based index)
    arr[pos - 1] = value;
    n++; // Increment size

    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
