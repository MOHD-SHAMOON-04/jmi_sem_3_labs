// 1. To make a menu driven program to find out factorial of a number, Fibonacci sequence
//    till n terms and check whether a number is prime or not.
// 2. To travers a matrix in spiral order (matrix is of order 3).
#include <stdio.h>

int main()
{
    int choice, num;
    while (1)
    {
    printf("MENU->\n\t1. Ques 1\t2. Ques 2\t0. Exit\n>");
    scanf("%d",&choice);
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