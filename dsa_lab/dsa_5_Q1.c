// DSA lab 5 (2/9/24)
// ques 1 : implementation of queue using arrays
// 1. enqueue
// 2. dequeue
// 3. isempty
// 4. isfull
// 5. peek
// 6. print queue
// 0. exit

#include <stdio.h>
#include <stdlib.h>

// print array
void prtArr(int *a, int head, int rear)
{
    printf("Current Queue : [");
    for (int i = head; i <= rear; i++)
    {
        printf(" %2d ", a[i]);
        if (i < rear)
        {
            printf(",");
        }
    }
    printf("]\n");
}

// is empty
int isEmpty(int head, int rear)
{
    if (head == -1 && rear == -1)
    {
        return 0; // yes it is empty
    }
    return -1; // not empty
}

// is full
int isFull(int head, int rear, int maxsize)
{
    if (head == 0 && rear == (maxsize - 1))
    {
        return 0; // yes it is full
    }
    return -1; // not full
}

int main()
{
    int maxsize, val = 0, res = 0, choice = 0;
    int head = -1, rear = -1;

    printf("Enter maximum size of Queue : ");
    scanf("%d", &maxsize);

    int *arr = malloc(maxsize * sizeof(int));

    while (1)
    {
        printf("MENU :\n\t[1. Enqueue]\n\t[2. Dequeue]\n\t[3. is-empty]\n\t[4. is-full]\n\t[5. peek]\n\t[6. print queue]\n\t[0.Exit]\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;

        // enqueue & is-full
        case 1:
        case 4:
        {
            res = isFull(head, rear, maxsize);
            if (res == 0)
            {
                printf(">>>Queue is full\n");
                // prtArr(arr, head, rear);
                break;
            }
            // else queue is not full
            switch (choice)
            {
            // enqueue
            case 1:
            {
                printf("Enter value to be inserted : ");
                scanf("%d", &val);
                if (head == -1 && rear == -1)
                {
                    head++;
                    rear++;
                    arr[rear] = val;
                }
                else
                {
                    rear++;
                    arr[rear] = val;
                }
                prtArr(arr, head, rear);
                break;
            }

            // is-full
            case 4:
            {
                printf(">>>Queue is NOT full\n");
                break;
            }
            }
            break;
        }

        // dequeue & is-empty & peek
        case 2:
        case 3:
        case 5:
        case 6:
        {
            res = isEmpty(head, rear);
            if (res == 0)
            {
                printf(">>>Queue is Empty\n");
                break;
            }
            // else queue is not empty
            switch (choice)
            {

            // denqueue
            case 2:
            {
                if (head == rear)
                {
                    head = -1;
                    rear = -1;
                }
                else
                {
                    head++;
                    prtArr(arr, head, rear);
                }
                break;
            }

            // is-empty
            case 3:
            {
                printf(">>>Queue is NOT Empty\n");
                // prtArr(arr, head, rear);
                break;
            }

            // peek
            case 5:
            {
                printf("Element at the HEAD is : %d\n", arr[head]);
                break;
            }
            case 6:
            {
                prtArr(arr, head, rear);
                break;
            }
            }
            break;
        }

        default:
            printf("Invalid choice choose from (0-5)\n");
            break;
        }
    }

    return 0;
}