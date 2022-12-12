#include<stdio.h>
void main()
{   int*array;
    array=(int *)malloc(size*sizeof(int));
    int loc,size,value;
    printf("enter the size of array!!");
    scanf('%d',&size);
    printf("enter the location to insert element!");
    scanf('%d',&loc);
    printf("enter the value insert!");
    scanf('%d',&value);
    for ( i =size-1; i >loc-1; i--)
    {
        student[i+1]=student[i];
        student[loc-1]= value;
    }
    for ( i = 0; i < size; i++)
    print("\n");
    print(array[i]," ");
    }
    
}
