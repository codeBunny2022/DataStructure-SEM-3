#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},n,i,flag;
    printf("Enter the element to be serched .\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            printf("Value %d is found at index..%d",n,i);
            flag=1;
            break;
        }
    }
     if(flag ==0)
        {
            printf("Given value is not in array!");
        }
}
