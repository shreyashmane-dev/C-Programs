#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("--- Program 8: Find Second Largest Element in Array ---\n");
    printf("Enter number of elements (at least 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("\nThere is no distinct second largest element (all elements might be equal).\n");
    } else {
        printf("\nLargest element        = %d\n", largest);
        printf("Second largest element = %d\n", second_largest);
    }

    return 0;
}
