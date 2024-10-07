// DSA lab 6 (7/10/24)
// Ques 2 : WAP to implement Priority Queue

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    int priority;
    struct Node *next;
} ListNode;

ListNode *head = NULL;

void insert(int data, int priority)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    if (head == NULL || priority < head->priority)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    ListNode *temp = head;
    while (temp->next != NULL && temp->next->priority <= priority)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete()
{
    if (head == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    ListNode *temp = head;
    head = head->next;
    free(temp);
}

void print_queue()
{
    ListNode *temp = head;
    printf("Queue: [");
    while (temp != NULL)
    {
        printf("(%d, %d) ", temp->data, temp->priority);
        temp = temp->next;
    }
    printf("]\n");
}

int main()
{
    int choice;
    int MaxSize, len = 0;
    printf("Enter the maximum size of the queue: ");
    scanf("%d", &MaxSize);
    while (1)
    {
        printf("Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (len == MaxSize)
            {
                printf("Queue is full\n");
                continue;
            }
            int data, priority;
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter priority: ");
            scanf("%d", &priority);

            insert(data, priority);
            len++;
            print_queue();
        }
        else if (choice == 2)
        {
            if (len == 0)
            {
                printf("Queue is empty\n");
                continue;
            }
            delete();
            len--;
            print_queue();
        }
        else if (choice == 0)
        {
            printf("Exit...\n");
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    return 0;
}