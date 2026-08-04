#include <stdio.h>

int main() {
    int n, i, target, found = 0;

    printf("--- Program 4: Linear Search in Array ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("\nFound element %d at index %d (position %d)!\n", target, i, i + 1);
            found = 1;
            break; // Stop once found
        }
    }

    if (!found) {
        printf("\nElement %d was not found in the array.\n", target);
    }

    return 0;
}
