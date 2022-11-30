#include<stdio.h>
int main()
{
    int n,i, temp;
    printf("Enter the length of array!\n");
    scanf("%d",&n);
    int* arr ;
    arr = (int *)malloc(n *sizeof(int));
    printf("\nEnter the elements of an array!\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",arr[i]);
    }
    int z=n;
    for(int j=0;j<z;j++)
    {
        temp=arr[z];
        arr[z]=arr[j];
        arr[j]=temp;
        z=z-1;
    }
    for(i=0;i<4;i++)
    {
        printf(" %d",arr[i]);
    }
}
