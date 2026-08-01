#include <stdio.h>

int main() {
    int n, i;

    printf("--- Program 3: Find Maximum and Minimum Elements ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int max_idx = 0;
    int min_idx = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_idx = i;
        }
    }

    printf("\nMaximum element = %d at index %d (position %d)\n", max, max_idx, max_idx + 1);
    printf("Minimum element = %d at index %d (position %d)\n", min, min_idx, min_idx + 1);

    return 0;
}
