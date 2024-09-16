// DSA lab - 1 (22/7/24)
// Q2- to find the sum of diagonal elements(both)

#include <stdio.h>
int main()
{
    //taking number of rows and columns
    int n;
    printf("enter the number of rows and columns(for square matrix): ");
    scanf("%d", &n);
    //declaring the matrix
    int arr[n][n];
    //taking input
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
        for (int j = 0; j < n; j++)
        {
            printf("| %2d ", arr[i][j]);
        }
        printf("|\n");
    }
    //printing done
    //initialising sum
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][n - i - 1];
        // what does += do?
        // sum1 = sum1 + arr[i][i];
    }
    //printing sum
    printf("sum of diagonal 1: %d\nsum of diagonal 2: %d\n", sum1, sum2);
    return 0;
}