// DSA lab 4 (12/8/24)
// Menu driven program : to implement the following on a stack using arrays
// 1. push
// 2. pop
// 3. is empty
// 4. is full
// 5. peek
// 6. exit

#include <stdio.h>
#include <stdlib.h>

// print array
void prtArr(int *a, int index)
{
    printf("Current Stack : [");
    for (int i = 0; i < index; i++)
    {
        printf(" %2d ", a[i]);
        if (i < index - 1)
        {
            printf(",");
        }
    }
    printf("]\n");
}

// is empty
int isEmpty(int index)
{
    if (index == 0)
    {
        return 0; // yes it is empty
    }
    return -1; // not empty
}

// is full
int isFull(int index, int maxsize)
{
    if (index == maxsize)
    {
        return 0; // yes it is full
    }
    return -1; // not full
}

int main()
{
    int maxsize, index = 0, val = 0, res = 0, choice = 0;

    printf("Enter maximum size of array : ");
    scanf("%d", &maxsize);

    int *arr = malloc(maxsize * sizeof(int));

    while (1)
    {
        printf("MENU : [1. push]\t[2. pop]\t[3. is-empty]\t[4. is-full]\t[5. peek]\t[0.Exit]\n");
        printf("Enter choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            printf("Exit!\n");
            return 0;
            break;
        }

        // push & is-full
        case 1:
        case 4:
        {
            res = isFull(index, maxsize);
            if (res == 0)
            {
                printf(">>>Stack is full\n");
                break;
            }

            // push
            switch (choice)
            {
            case 1:
            {
                printf("Enter value to be inserted : ");
                scanf("%d", &val);

                arr[index] = val;
                index++;

                prtArr(arr, index);
                break;
            }
            case 4:
            {
                printf(">>>Stack is NOT full\n");
                break;
            }
            }
            break;
        }

        // pop & is-empty & peek
        case 2:
        case 3:
        case 5:
        {
            res = isEmpty(index);
            if (res == 0)
            {
                printf(">>>Stack is Empty\n");
                break;
            }

            // pop & peek
            switch (choice)
            {
            // pop
            case 2:
            {
                index--;
                prtArr(arr, index);
                break;
            }
            case 3:
            {
                printf(">>>Stack is NOT Empty\n");
                break;
            }
            // peek
            case 5:
            {
                printf("Element at the TOP is : %d\n", arr[index - 1]);
                break;
            }
            }
            break;
        }

        default:
            printf("Invalid choice - choose from (0 to 5)\n");
            break;
        }
    }

    return 0;
}