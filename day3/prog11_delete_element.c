#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos;

    printf("--- Program 11: Delete Element from Specific Position ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty!\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position! Position must be between 1 and %d.\n", n);
        return 1;
    }

    int deleted_item = arr[pos - 1];

    // Shift elements to the left to fill the gap
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrement size

    printf("\nDeleted element: %d\n", deleted_item);
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
