#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k;
    int rowMin, colIndex;
    int found = 0;

    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        // Step 1: Find the smallest element in this row
        rowMin = matrix[i][0];
        colIndex = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colIndex = j;
            }
        }

        // Step 2: Check if it's the largest in its column
        int isSaddle = 1;
        for (k = 0; k < 3; k++) {
            if (matrix[k][colIndex] > rowMin) {
                isSaddle = 0;
                break;
            }
        }

        // Step 3: Print if it's a saddle point
        if (isSaddle) {
            printf("Saddle point found at (%d,%d): %d\n", i, colIndex, rowMin);
            found = 1;
        }
    }

    if (!found) {
        printf("No saddle point found.\n");
    }

    return 0;
}

