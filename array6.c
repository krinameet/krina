#include <stdio.h>
intmain()
{
    int m, n, p;
    printf("Enter rows and columns of first matrix");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of first matrix: \n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    int B[n][p], C[m][p];

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
