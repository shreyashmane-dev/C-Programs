#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    printf("--- Program 19: Merge Two Sorted Arrays ---\n");
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d sorted elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    i = 0; // index for arr1
    j = 0; // index for arr2
    k = 0; // index for merged

    // Merge process
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("\nMerged Sorted Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
