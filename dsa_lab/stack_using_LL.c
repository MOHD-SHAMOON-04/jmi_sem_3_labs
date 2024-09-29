// Implementation of Stack using Linked List in C programming language
// Menu driven program
// 1. push
// 2. pop
// 3. peek
// 4. is_full
// 5. is_empty
// 0. Exit
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_using_LL
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

ListNode *push(ListNode *top, int data)
{
    ListNode *newNode = CreateNode(data);
    if (top != NULL)
    {
        newNode->next = top;
    }
    top = newNode;
    return top;
}

ListNode *pop(ListNode *top)
{
    printf("Last poped value = %d\n", top->data);
    top = top->next;
    return top;
}

int peek(ListNode *top)
{
    return top->data;
}

void printStack(ListNode *top)
{
    ListNode *temp = top;
    printf("Stack : ");
    while (temp != NULL)
    {
        printf("-> %d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice, data, maxSize, stackSize = 0;
    printf("Enter maximum size of STACK : ");
    scanf("%d", &maxSize);
    ListNode *top = NULL;
    // ListNode var1 = { 11, NULL};
    // printf("value of var1 = %d\naddress of var2 = %d\n", var1.data, var1.next);
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
            if (stackSize == maxSize)
            {
                printf("Stack is full\n");
                break;
            }
            switch (choice)
            {
            case 1:
            {
                // push
                printf("Enter value to be inserted: ");
                scanf("%d", &data);
                top = push(top, data);
                stackSize++;
                printStack(top);
                break;
            }
            case 4:
            {
                // if_full
                printf("Stack is NOT full\n");
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
            if (stackSize == 0)
            {
                printf("Stack is empty\n");
                break;
            }
            switch (choice)
            {
            case 2:
            {
                // pop
                top = pop(top);
                stackSize--;
                printStack(top);
                break;
            }
            case 3:
            {
                // peek
                int res = peek(top);
                printf("Value at the top = %d", res);
                break;
            }
            case 5:
            {
                // is_empty
                printf("Stack is NOT empty\n");
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