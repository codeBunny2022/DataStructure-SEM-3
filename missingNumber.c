#include<stdio.h>
#include<stdlib.h>
void main()
{
    int sum=0;
    int*array;
    array=(int *)malloc(size*sizeof(int));
    int loc,size,value;
    printf("enter the size of array!!");
    scanf('%d',&size);
    printf("Enter the elements of array!");
    for (i=0; i<size;i++)
    {
        scanf('%d',&array[i]);
        sum=sum+array[i];
    }
    int total;
    total=(size*(size+1))/2;
    printf("Missing number is%d",total-sum);
    
}