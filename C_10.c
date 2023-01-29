#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j;
    int sum = 0;
    int main_diag = 0;
    int sec_diag = 0;

    // Input the matrix elements
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements and the diagonals
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            sum += matrix[i][j];
            if (i == j) {
                main_diag += matrix[i][j];
            }
            if (i == 3 - j) {
                sec_diag += matrix[i][j];
            }
        }
    }

    // Print the sum of all elements and the diagonals
    printf("Sum of all elements: %d\n", sum);
    printf("Sum of main diagonal: %d\n", main_diag);
    printf("Sum of secondary diagonal: %d\n", sec_diag);

    return 0;
}