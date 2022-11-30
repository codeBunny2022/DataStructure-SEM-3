#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5]={4,5,6,7,8},arr3[10],i=0,j=0;
    printf("UNION OF BOTH ARRAYS IS \n");
    while(i<5)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[i]=arr1[i];
            i++;
            continue;
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[i]=arr2[j];
            j++;
            continue;
        }
        else if(arr1[i]==arr2[j])
        {
            arr3[i]=arr1[j];
            i++;
            j++;
            continue;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d\n",&arr3[i]);
    }
}
