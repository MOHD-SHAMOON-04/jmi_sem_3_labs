// Implementation of Queue using Linked List in C programming language
// Menu driven program
// 1. push
// 2. pop
// 3. peek
// 4. is_full
// 5. is_empty
// 0. Exit
#include <stdio.h>
#include <stdlib.h>

typedef struct queue_using_LL
{
    int data;
    struct stack_using_LL *next;
} ListNode;

ListNode *CreateNode(int data)
{
    ListNode *Node = (ListNode *)malloc(sizeof(ListNode));
    Node->data = data;
    Node->next = NULL;
    return Node;
}

ListNode *push(ListNode *front, int data)
{
    ListNode *newNode = CreateNode(data);
    if (front == NULL)
    {
        front = newNode;
        return front;
    }
    ListNode *temp = front;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return front;
}

ListNode *pop(ListNode *front)
{
    printf("Last poped element = %d\n", front->data);
    ListNode *temp = front;
    front = front->next;
    free(temp);
    return front;
}

int peek(ListNode *front)
{
    return front->data;    
}

void printQueue(ListNode *front)
{
    ListNode *temp = front;
    printf("Queue : ");
    while (temp != NULL)
    {
        printf("-> %d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice, data, maxSize, QueueSize = 0;
    printf("Enter maximum size of QUEUE : ");
    scanf("%d", &maxSize);
    ListNode *front = NULL;

    while (1)
    {
        printf("\n=====MENU=====\n1. push\n2. pop\n3. peek\n4. is_full\n5. is_empty\n0. Exit\nEnter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            return 0;
        }
        // push and is_full
        case 1:
        case 4:
        {
            if (QueueSize == maxSize)
            {
                printf("Queue is full\n");
                break;
            }
            switch (choice)
            {
            case 1:
            {
                // push
                printf("Enter value to be inserted: ");
                scanf("%d", &data);
                front = push(front, data);
                QueueSize++;
                printQueue(front);
                break;
            }
            case 4:
            {
                // if_full
                printf("Queue is NOT full\n");
                break;
            }
            }
            break;
        }
        // pop , peek , is_empty
        case 2:
        case 3:
        case 5:
        {
            if (QueueSize == 0)
            {
                printf("Queue is empty\n");
                break;
            }
            switch (choice)
            {
            case 2:
            {
                // pop
                front = pop(front);
                QueueSize--;
                printQueue(front);
                break;
            }
            case 3:
            {
                // peek
                int res = peek(front);
                printf("Value at the top = %d", res);
                break;
            }
            case 5:
            {
                // is_empty
                printf("Queue is NOT empty\n");
                break;
            }
            }
            break;
        }
        default:
        {
            printf("Invalid choice -> choose from (0-5)\n");
            break;
        }
        }
    }
    return 0;
}