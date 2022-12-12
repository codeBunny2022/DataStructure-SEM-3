#include<stdio.h>
#include<stdlib.h>
void main()
{
    int k=0;
    int arr1[]= {1,3,6,9};
    int arr2[]= {0,5,6,7};
    int arr3[10]= {0};
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
                j++;
                k++;
            }
            else
            {
                arr3[k]=arr1[i];
                arr3[k]=arr2[j];
                k++;
            }
        }
    }
    for(int l=0; l<=9; l++)
    {
        printf("union of sets is\n");
        printf('%d',arr3[l]," ,");
    }
}
