#include <stdio.h>

int main() {
    int n, i, j;

    printf("--- Program 12: Frequency of Each Element in Array ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n]; // Array to mark counted elements

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize as not visited
    }

    printf("\nElement | Frequency\n");
    printf("-------------------\n");
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted
        }

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }
        printf("%7d | %5d\n", arr[i], count);
    }

    return 0;
}
