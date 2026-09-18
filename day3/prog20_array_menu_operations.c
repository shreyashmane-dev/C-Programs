#include <stdio.h>

int main() {
    int arr[100];
    int n = 0, choice, i, target, found;
    int sum, max, min;
    float avg;

    printf("--- Program 20: Menu-Driven Array Operations ---\n");
    printf("Enter number of initial elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n============================\n");
        printf("       ARRAY MENU           \n");
        printf("============================\n");
        printf("1. Display Array Elements\n");
        printf("2. Calculate Sum and Average\n");
        printf("3. Find Maximum and Minimum\n");
        printf("4. Search an Element\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nArray elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                avg = (float)sum / n;
                printf("\nSum = %d, Average = %.2f\n", sum, avg);
                break;

            case 3:
                max = arr[0];
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("\nMaximum = %d, Minimum = %d\n", max, min);
                break;

            case 4:
                printf("\nEnter element to search: ");
                scanf("%d", &target);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == target) {
                        printf("Element %d found at index %d (position %d)\n", target, i, i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Element %d not found in the array.\n", target);
                }
                break;

            case 5:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1 to 5.\n");
        }
    } while (choice != 5);

    return 0;
}
