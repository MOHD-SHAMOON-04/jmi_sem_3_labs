// c lab 5 (2/9/24)
// ques 1 : given an array find all the prime numbers and store them into another array and
//          to find the sum of all digits of each ele and store it into another array
#include <stdio.h>

// prime number
int prime(int *a, int size, int *res)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        int temp = a[i];
        int flag = 0;
        for (int j = 2; j <= temp / 2; j++)
        {
            if (temp % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            res[k] = temp;
            k++;
        }
    }
    return k;
}

// sum of digits
void sumDigits(int *a, int size, int *res)
{
    for (int i = 0; i < size; i++)
    {
        int temp = a[i];
        int sum = 0;
        while (temp > 0)
        {
            int dig = temp % 10;
            temp = temp / 10;
            sum = sum + dig;
        }
        res[i] = sum;
    }
}

int main()
{
    int size = 10;
    int prm[10];
    int sum[10];
    //see the ques : it is to be assumed that a array is given
    int a[10] = {02, 03, 05, 13, 19, 24, 34, 56, 57, 79};

    printf("INITIAL ARRAY => [");
    for (int i = 0; i < size; i++)
    {
        printf(" %02d ", a[i]);
    }
    printf("]\n");

    int size_prm = prime(a, size, prm);
    printf("PRIME ARRAY   => [");
    for (int i = 0; i < size_prm; i++)
    {
        printf(" %02d ", prm[i]);
    }
    printf("]\n");

    sumDigits(a, size, sum);
    printf("SUM ARRAY     => [");
    for (int i = 0; i < size; i++)
    {
        printf(" %02d ", sum[i]);
    }
    printf("]\n");

    return 0;
}
