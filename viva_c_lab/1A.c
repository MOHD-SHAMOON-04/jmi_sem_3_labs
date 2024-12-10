// 1. Write a menu driven program to convert decimal to binary and vice versa.
// 2. Write a program to sort the rows of matrix in increasing order of their sum.
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int choice;
    while (1)
    {
        printf("MENU->\n\t1. Ques 1\n\t2. Ques 2\n\t0. Exit\n>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            // ques 1
            int dec, bin;
            printf("MENU->\n\t1. Decimal to Binary\n\t2. Binary to Decimal\n>");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                // dec to bin
                printf("Enter a decimal number : ");
                scanf("%d", &dec);
                bin = 0;
                int temp = dec, k = 1;
                while (temp > 0)
                {
                    bin = bin + (temp % 2) * k;
                    k *= 10;
                    temp = temp / 2;
                }
                printf("(%d) in base-10 == (%d) in base-2\n", dec, bin);
                break;
            }
            case 2:
            {
                // bin to dec
                printf("Enter a binary number : ");
                scanf("%d", &bin);
                dec = 0;
                int temp = bin;
                //////////////////here///////////
                break;
            }
            default:
                printf("Invalid choice\n");
                break;
            }
            break;
        }

        case 2:
        {
            // ques 2
            int m[3][3] = {{11, 19, 3},
                           {0, 5, 6},
                           {7, 8, 9}};
            int temp[3]; // 3 = num of rows
            int p, q;
            p = 3;
            q = 3;
            // int m[10][10];
            // int temp[10];
            // printf("Enter number of rows and cols : ");
            // scanf("%d %d", &p, &q);
            // for (int i = 0; i < p; i++)
            // {
            //     for (int j = 0; j < q; j++)
            //     {
            //         scanf("%d", &m[i][j]);
            //     }
            // }

            // printing initial matrix
            printf("Initial Matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf(" %d ", m[i][j]);
                }
                printf("\n");
            }

            // finding sum of all elements of each row and storing in temp
            for (int i = 0; i < p; i++) // loop to iterate upon all rows
            {
                int sum = 0;
                for (int j = 0; j < q; j++) // loop to iterate upon all elements in arow
                {
                    sum = sum + m[i][j];
                }
                temp[i] = sum;
            }

            // comparing values of sum and swapping rows
            for (int i = 0; i < (p - 1); i++) // 0,1
            {
                int max = 0;
                for (int j = 1; j < (p - i); j++)
                {
                    if (temp[max] < temp[j])
                    {
                        max = j;
                    }
                }
                // swapped the elements of temp to push max sum at the top
                swap(&temp[max], &temp[p - 1 - i]);

                // swap (max)th row to the (last - i)th one
                for (int k = 0; k < p; k++) // p = num of rows
                {
                    swap(&m[max][k], &m[p - 1 - i][k]);
                }
            }

            // printing final matrix
            printf("Final Matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf(" %d ", m[i][j]);
                }
                printf("\n");
            }
            break;
        }
        default:
        {
            printf("Invalid choice\n");
            break;
        }
        }
    }

    return 0;
}