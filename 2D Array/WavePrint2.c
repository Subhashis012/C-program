#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the dimensions of the matrix (n m): ");
    scanf("%d %d", &n, &m);

    // Input matrix
    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Wave print
    printf("Wave print:\n");
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) { // For even columns, print bottom to top
            for (int i = n - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        } else { // For odd columns, print top to bottom
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
