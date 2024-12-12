#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int m[10][10];
    int res[10][10];
    
    printf("enter size of matrix(<10) : ");
    scanf("%d", &num);
    
    printf("Initializing the matrix\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d elements for %d row : ", num, i);
        for (int j = 0; j < num; j++)
        {
            int temp;
            // printf("enter ele for[%d][%d] : ", i, j);
            scanf("%d", &temp);
            m[i][j] = temp;
        }
        printf("\n");
    }
    // printing initial matrix
    printf("Initial MATRIX\n");
    for (int i = 0; i < num; i++)
    {
        printf("|");
        for (int j = 0; j < num; j++)
        {
            printf(" %02d ", m[i][j]);
            if (j < num - 1)
            {
                printf(",");
            }
            
        }
        printf("|\n");
    }
    // rotating matrix
    int k = num - 1; //3 for num=4
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            int temp = m[i][j];
            res[j][k] = temp; 
        }
        k--;
    }
    // printing final matrix
    printf("Final MATRIX\n");
    for (int i = 0; i < num; i++)
    {
        printf("|");
        for (int j = 0; j < num; j++)
        {
            printf(" %02d ", res[i][j]);
            if (j < num - 1)
            {
                printf(",");
            }
            
        }
        printf("|\n");
    }
    
    return 0;
}