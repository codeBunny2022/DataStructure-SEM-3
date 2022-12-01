#include<stdio.h>
int arr[10]= {1,56,74,87,35,75,76,13,77,96},gap,temp,i,j,n;
void main()
{
    n=sizeof(arr);
    void shellSort(int arr,int n)
    {
        for(gap=int(n/2); gap>0; gap=int(gap/2))
        {
            for(i=gap; i<n; i++)
            {
                temp=arr[i];
                for(j=i; (j>=gap) && arr[j-gap]>temp; j=j-gap)
                {
                    arr[j]=arr[j-gap];
                }
            }
            arr[j]=temp;
        }
    }

    printf("Sorted array is:\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",arr[i]);
    }
}
