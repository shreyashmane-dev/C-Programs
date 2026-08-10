#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("--- Program 6: Count Even and Odd Numbers in Array ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            even_count++;
        }
    }

    printf("\nOdd numbers:  ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            odd_count++;
        }
    }

    printf("\n\nTotal Even Count = %d\n", even_count);
    printf("Total Odd Count  = %d\n", odd_count);

    return 0;
}
