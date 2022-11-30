#include<stdio.h>
#include<malloc.h>

int main()
{
    int n,i,del;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    int* arr ;
    arr = (int *)malloc(n *sizeof(int));
    printf("Now enter the elements of array!\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Now enter the value to be deleted.\n");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(arr[i]== del)
        {
            for(int j=i;j<=n;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d \n",arr[k]);
    }
    return 0;
}
