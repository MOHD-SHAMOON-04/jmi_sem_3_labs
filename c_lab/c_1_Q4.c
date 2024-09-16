// c lab 1 (22/7/24)
// q1 prime or not (too esy)
// q2 factorial (too esy)
// q3 fibonacci (esy)
// q4 find the largest pair sum in an unordered array (solution below)

//for linux -->
//create a .c extention file (file.c)
//compile using (gcc file.c)
//execute using (./a.out)

//QUESTION 4
#include<stdio.h>

//taking input
void take_arr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("enter element at %d: ",i);
        scanf("%d",&a[i]);
    }
}

//printing array
void print_arr(int *a, int n){
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d ",a[i]);
    }
    printf("}");
}

//function to swap two elemrnts of array
void swap(int *a, int n, int i, int b)//(array, size, index, max ele number)
{
    int temp = a[i];
    a[i] = a[n-b-1];
    a[n-b-1] = temp;
}

//finding 2 maximum element and returning them
void find_max(int *a, int n)
{
    int max_ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[max_ind] < a[i])
        {
            max_ind = i;
        }
    }
    swap(a, n, max_ind,0);
    //after 1st loop, we got the max1 ineger and swapped it with last element
    max_ind = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[max_ind] < a[i])
        {
            max_ind = i;
        }
    }
    swap(a, n, max_ind,1);
    //after 2nd loop, we got the max2 ineger index
}
int main()
{
    int num;
    printf("enter size of array: ");
    scanf("%d",&num);
    int a[num];
    
    take_arr(a,num);
    print_arr(a,num);
    // if contion to check if the array is of size 1
    if (num == 1)
    {
        printf("\nonly 1 element in array, largest pair sum can't be found\n");
        return 0;
    }
    else {
        find_max(a, num);
        printf("\n");
        print_arr(a,num);
        printf("\nlargest pair sum = %d",( a[num-1]+a[num-2] ));
    }
    return 0;
}