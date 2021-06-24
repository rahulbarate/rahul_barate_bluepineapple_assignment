#include <stdio.h>
#include <stdlib.h>

void main()
{
    int r1, c1, r2, c2, i, j, k;
    int **arr1, **arr2, **arr3;
    printf("\nEnter the size of first matrix(Row and column) : ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the size of second matrix(Row and column) : ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("column size of first matrix must match with the row size of second matrix");
        exit(1);
    }

    // initializing 1st array
    arr1 = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++)
        arr1[i] = (int *)malloc(c1 * sizeof(int));

    // initializing 2nd array
    arr2 = (int **)malloc(r2 * sizeof(int *));
    for (i = 0; i < r2; i++)
        arr2[i] = (int *)malloc(c2 * sizeof(int));

    // initializing 3rd array
    arr3 = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++)
        arr2[i] = (int *)malloc(c2 * sizeof(int));

    // accpecting 1st array elements
    printf("\nEnter First array element\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\nEnter %d row %d column element : ", (i + 1), (j + 1));
            scanf("%d", &arr1[i][j]);
        }
    }

    // accpecting 1st array elements
    printf("\nEnter Second array element\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\nEnter %d row %d column element : ", (i + 1), (j + 1));
            scanf("%d", &arr2[i][j]);
        }
    }

    // initializing 3rd array elements to zero
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
        }
    }

    // array multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {

            for (k = 0; k < c2; k++)
            {
                arr3[i][k] += (arr1[i][j]) * (arr2[j][k]);
            }
        }
    }

    printf("\nafter multiplication");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf(" %d ", arr3[i][j]);
        }
    }
}