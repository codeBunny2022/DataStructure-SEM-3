#include<stdio.h>
#include<conio.h>
int main()
{
    int ele;
    int arr[5]= {1,2,3,4,6};
    for(int i =0; i<5; i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("Enter the element to be inserted \n");
    scanf("%d",&ele);
    for(int j=0; j<6; j++)
    {
        if(arr[j]<ele <arr[j+1])
        {
            arr[j] =ele;
        }
    }
    return 0;
    for(int k=0; k< sizeof(arr) ;k++)
    {
        printf(" %d",arr[k]);
    }
}
