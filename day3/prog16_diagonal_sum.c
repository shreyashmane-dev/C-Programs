#include <stdio.h>

int main() {
    int n, i, j;
    int main_diag_sum = 0, anti_diag_sum = 0;

    printf("--- Program 16: Sum of Diagonal Elements of Square Matrix ---\n");
    printf("Enter order of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter elements of matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums
    for (i = 0; i < n; i++) {
        main_diag_sum += matrix[i][i];             // Primary diagonal (i == j)
        anti_diag_sum += matrix[i][n - 1 - i];     // Anti-diagonal (j == n - 1 - i)
    }

    printf("\nEntered Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Primary Diagonal Elements   = %d\n", main_diag_sum);
    printf("Sum of Secondary Diagonal Elements = %d\n", anti_diag_sum);

    return 0;
}
