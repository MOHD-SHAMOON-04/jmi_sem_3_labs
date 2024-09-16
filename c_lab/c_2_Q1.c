// c lab 2 (29/7/24)
// q1 wap to find min and max ele in an array & exchange their places
#include <stdio.h>
//to find min
int min_arr(int *b, int n)
{
	int temp = b[0], index = 0;
	for (int i = 0; i < n; i++)
	{
		if (temp > b[i])
		{
			temp = b[i];
			index = i;
		}
	}
	printf("min = %d (found at index = %d)\n", temp,index);
	return index;
}
//to find max
int max_arr(int *b, int n)
{
	int temp = b[0], index = 0;
	for (int i = 0; i < n; i++)
	{
		if (temp < b[i])
		{
			temp = b[i];
			index = i;
		}
	}
	printf("max = %d (found at index = %d)\n", temp,index);
	return index;
}
//takeing input
void take_arr(int* b,int n){
	for (int i=0;i<n;i++){
		printf("Enter ele at %d: ",i);
        scanf("%d",&b[i]);
		}
}
//printing array
void prt_arr(int* b,int n){
	printf("[");
	for (int i=0;i<n;i++){
		printf(" %d ",b[i]);
		}
		printf("]\n");
}
int main()
{
	int min, max;
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
	int a[n];
    take_arr(a,n);
	prt_arr(a,n);
	min = min_arr(a, n);
	max = max_arr(a, n);
    //switching places of min and max element
	int temp = a[min];
	a[min] = a[max];
	a[max] = temp;
	prt_arr(a,n);
	return 0;
}