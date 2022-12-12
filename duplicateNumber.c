#include<stdio.h>
#include<stdlib.h>
void main()
{   int array1[]={0};
    printf("enter the number of elements in array!");
    scanf('%d',&size);
    int array2[size-1]={0};
    printf("enter the elements of array!");
    for (i=0;i<size-1;i++)
    {
        scanf('%d',&array1[i]," ");
    }
    for (j=0;j<size-1;j++)
    {
     array2[array1[j]]++;   
    }
    for (k=0;k<size-1;k++)
    {
        if(array2[k]!=0)
        {
            printf('%d',k," is the number which is repeated!")
        }
    }
    
}