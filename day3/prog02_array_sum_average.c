#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("--- Program 2: Sum and Average of Array Elements ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    average = (float)sum / n;

    printf("\nSum of elements = %d\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}
