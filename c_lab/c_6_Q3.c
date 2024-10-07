// C lab 6 (7/10/24)
// Ques 3 : WAP to check whether a string is a palindrome or not (without using library functions)

#include <stdio.h>
// without using library functions

int length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int is_palindrome(char *str, int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str); // gets is used to take input from user containing spaces, it is defined in stdio.h

    int len = length(str);
    printf("Original string: %s\n", str);

    if (is_palindrome(str, len))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}