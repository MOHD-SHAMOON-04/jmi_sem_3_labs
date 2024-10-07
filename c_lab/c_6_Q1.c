// C lab 6 (7/10/24)
// Ques 1 : WAP to reverse a string (without using library functions)

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

void reverse(char *str, int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str); // gets is used to take input from user containing spaces
    // scanf("%s", str); // scanf is used to take input from user without spaces

    int len = length(str);
    printf("Original string: %s\n", str);
    
    reverse(str, len);
    printf("Reversed string: %s\n", str);
    return 0;
}