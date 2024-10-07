// DSA lab 6 (7/10/24)
// Ques 1 : WAP to implement Linked List having
//          1. insert at index
//          2. deletion at index
//          3. exit

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} ListNode;
ListNode *head = NULL;

void insert_at_index(int data, int index)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;

    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    ListNode *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_at_index(int index)
{
    if (index == 0)
    {
        ListNode *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    ListNode *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    ListNode *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

void print_list()
{
    ListNode *temp = head;
    printf("List: [");
    while (temp != NULL)
    {
        printf("-> %d ", temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

int main()
{
    int choice;
    int len = 0;
    while (1)
    {
        printf("Menu:\n");
        printf("1. Insert at index\n");
        printf("2. Delete at index\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int data, index;
            printf("Enter index: ");
            scanf("%d", &index);
            while (index < 0 || index > len)
            {
                printf("Invalid index, enter again: ");
                scanf("%d", &index);
            }
            
            printf("Enter data: ");
            scanf("%d", &data);
            insert_at_index(data, index);
            len++;
            print_list();
        }
        else if (choice == 2)
        {
            if (len == 0)
            {
                printf("List is empty\n");
                continue;
            }
            
            int index;
            printf("Enter index: ");
            scanf("%d", &index);
            while (index < 0 || index >= len)
            {
                printf("Invalid index, enter again: ");
                scanf("%d", &index);
            }
            delete_at_index(index);
            len--;
            print_list();
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