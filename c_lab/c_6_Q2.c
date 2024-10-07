// C lab 6 (7/10/24)
// Ques 2 : WAP to concatenate two strings (without using library functions)

#include <stdio.h>
#include <stdlib.h>
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

char *concat(char *str1, char *str2, int len1, int len2)
{
    char *res = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    int i = 0;
    for (i = 0; i < len1; i++)
    {
        res[i] = str1[i];
    }
    for (int j = 0; j < len2; j++)
    {
        res[i] = str2[j];
        i++;
    }
    res[i] = '\0';
    return res;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1); // gets is used to take input from user containing spaces

    printf("Enter second string: ");
    gets(str2); // gets is used to take input from user containing spaces

    int len1 = length(str1);
    int len2 = length(str2);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    char *res = concat(str1, str2, len1, len2);
    printf("Concatenated string: %s\n", res);
    free(res);
    return 0;
}