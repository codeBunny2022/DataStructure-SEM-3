#include<stdio.h>
void main()
{   int*array;
    array=(int *)malloc(size*sizeof(int));
    int loc,size,value;
    printf("enter the size of array!!");
    scanf('%d',&size);
    printf("enter the location to delete element!");
    scanf('%d',&loc);
    if(loc-1>size-1)
    {
        printf("deletion is not possible!");
    }
    else
    {
        for(i=0;i<size-1;i++)
        {
            array[i]=array[i+1];
        }
        for (i=0; i<size-1; i++)
        {
            printf(array[i]," ,");
        }
        
    }