// c lab 2 (29/7/24)
// q2 wap to rotate elements of an array by given number n
// (ex q2: {11,22,33,44,55,66},     rotate by n=2,    {55,66,11,22,33,44}   )
#include <stdio.h>
//takeing input
void take_arr(int* b,int n){
	for (int i=0;i<n;i++){
		printf("Enter ele at %d: ",i);
        scanf("%d",&b[i]);
		}
}
//printing array
void prt_arr(int *b, int n)
{
	printf("\n[");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", b[i]);
	}
	printf("]\n");
}
//rotating logic
void rotate(int *b,int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int temp = b[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			b[i] = b[i - 1];
		}
		b[0] = temp;
	}
}
int main()
{
	int n , num;
    printf("Enter the size of array: ");
    scanf("%d",&n);
	int a[n];
    take_arr(a,n);
	printf("initial array is:\n");
	prt_arr(a, n);
	printf("rotate by number: ");
	scanf("%d", &num);
	rotate(a, n, num);
	prt_arr(a, n);
	return 0;
}