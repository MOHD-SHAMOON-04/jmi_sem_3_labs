// DSA lab - 2 (29/7/24)
// Q1- wap to remove duplicate eles from an array

#include <stdio.h>
//taking array input
void input_arr(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("enter ele @%d: ", i);
		scanf("%d", &a[i]);
	}
}

//printing the array
void print_arr(int *a, int n)
{
	int i;
	printf("[");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("]\n");
}

//shifting
int shift(int *b, int len, int pos)
{
	int k;
	for (k = pos; k < (len - 1); k++)
	{
		b[k] = b[k + 1];
	}
	len--;
	return len;
}

//removing duplicate elements
int rem_dup(int *a, int n)
{
	int i, temp, j;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		for (j = i; j < (n - 1); j++)
		{
			// if (temp == a[j + 1])
			// {
			// 	n = shift(a, n, j + 1);
			// 	j--;
			// }
			while (j < (n-1) &&temp == a[j + 1])
			{
   			n = shift(a, n, j + 1);
			}
		}
	}
	return n;
}
//main
int main()
{
	int num;
	printf("enter number of elements: "); //1
	scanf("%d", &num); //2
	int a[num]; //3
	
	input_arr(a, num); //fun1
	printf("original\n");
	print_arr(a, num); //fun2

	num = rem_dup(a, num); //fun3
	printf("new\n");
	print_arr(a, num); //fun2

	//printf("enter 0 to exit:");
	//scanf("%d", &num);
	return 0;
}