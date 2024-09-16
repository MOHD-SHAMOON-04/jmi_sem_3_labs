// c lab 3 (5/8/24)
// q1 - wap to calculate factorial using functions
// q2 - wap to swap two numbers using function
// q3 - wap to calculate sum of/till n numbers using recurrsive function
// q4 - wap to reverse an array using function

#include <stdio.h>

// FACTORIAL
int fact(int num)
{
    int r = 1;
    for (int i = 2; i <= num; i++)
    {
        r = r * i;
    }
    return r;
}

// SWAP
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

// SUM TILL n NUMBERS
int sum(int num)
{
    int s = 0;
    for (int i = 1; i <= num; i++)
    {
        s = s + i;
    }
    return s;
}

// REVERSE AN ARRAY
void revarr(int *a, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}

int main()
{
    while (1)
    {
        printf("Enter [0.Exit], [1. Factorial], [2. Swap], [3. Sum of 'n' numbers], [4. Reverse an Array]\n>");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            printf("Program Terminated");
            return 0;
            break;
        }
        case 1:
        {
            int num;
            printf("Enter number for factorial : ");
            scanf("%d", &num);
            int result = fact(num);
            printf("The factorial of %d is %d\n", num, result);
            break;
        }
        case 2:
        {
            int a, b;
            printf("Enter two numbers to be swapped : ");
            scanf("%d %d", &a, &b);
            printf("Before swap : ( %d , %d )\n", a, b);
            swap(&a, &b);
            printf("After swap : ( %d , %d )\n", a, b);
            break;
        }
        case 3:
        {
            int num;
            printf("Enter number for sum : ");
            scanf("%d", &num);
            int result = sum(num);
            printf("The sum of first n numbers till %d is %d\n", num, result);
            break;
        }
        case 4:
        {
            int num;
            printf("Enter size of array : ");
            scanf("%d", &num);
            int arr[num];
            for (int i = 0; i < num; i++)
            {
                printf("Enter ele at arr[%d] : ", i);
                scanf("%d", &arr[i]);
            }

            printf("Before reverse\n");
            for (int i = 0; i < num; i++)
            {
                printf(" %02d ", arr[i]);
            }
            printf("\n");

            revarr(arr, num);

            printf("After reverse\n");
            for (int i = 0; i < num; i++)
            {
                printf(" %02d ", arr[i]);
            }
            printf("\n");
            break;
        }
        default:
        {
            printf("Invalid Choice\n");
            break;
        }
        }
    }
    return 0;
}