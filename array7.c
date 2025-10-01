#include <stdio.h>

void main()
{
    int mat[4][4], trans[4][4];
    int i, j;


    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++)
     {
        for(j = 0; j < 4; j++)
            {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            }
    }


    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }


    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }


}
