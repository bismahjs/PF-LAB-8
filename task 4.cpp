#include <stdio.h>

int main() {
    int arr[2][2][2];  // 3D array
    int i, j, k;

    // Input values
    printf("Enter 8 elements for the 2x2x2 array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Display values
    printf("\nThe 2x2x2 3D array is:\n");
    for (i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n"); // new line after each row
        }
        printf("\n"); // blank line between layers
    }

    return 0;
}

