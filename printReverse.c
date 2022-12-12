#include<stdio.h>
#define N 5
void main()
{
    int a[N],i;
    printf("Enter the elements of array!");
    for(int i=0;i<N;i++)
    {
        scanf('%d',&a[i]);
    }
    printf("Reversed array is \n");
    for(int j=N-1;j>=0;j--)
    {
        scanf('%d',&a[j]);
    }
}