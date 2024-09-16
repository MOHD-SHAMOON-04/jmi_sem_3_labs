// DSA lab - 1 (22/7/24)
// Q1- to find min and max element in a matrix

#include <stdio.h>
int main()
{
    //taking number of rows and columns
    int n, m;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    //declaring the matrix
    int arr[n][m];
    //taking input
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter element at (%d , %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //input done
    //printing the matrix
    printf("the matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("| %2d ", arr[i][j]);
        }
        printf("|\n");
    }
    //printing done
    //initialising min and max
    int min = arr[0][0], max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    //printing min and max
    printf("min: %d\nmax: %d\n", min, max);
    return 0;
}