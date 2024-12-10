// 1.Menu driven program to find transport of a matrix and multiplication of two matrices.
// 2.To find saddle point of a matrix, a saddle point is a point
//   which is the smallest in a row and a largest in a column.
#include <stdio.h>

// saddle point
// for (int i = 0; i < p; i++) // number of rows ke liye loop
// {
//     for (int j = 0; j < q; j++) // number of cols ke liye loop
//     {
//         // loop works for:
//         // 0th row & 0th col
//         // 0th row & 1th col
//         // 0th row & 2th col
//         // 1th row & 0th col
//         // 1th row & 1th col
//         // and so on..
//         for (int a = 0; a < q; a++) // finding
//         {
//         }
//     }
// }

int main()
{
    int choice, num;
    while (1)
    {
        printf("MENU->\n\t1. Ques 1\t2. Ques 2\t0. Exit\n>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            return 0;
            break;
        }
        case 1:
        {
            break;
        }

        case 2:
        {
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}