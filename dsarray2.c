#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[6]= {1,2,3,4,5};
    printf("Currently the array is...\n");
    for(int i =0; i<6; i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("Enter the element with position \n");
    int ele,pos;
    scanf("%d \n",& ele);
    scanf(" %d",& pos) ;
    for(int k=5; k>pos; k--)
    {
        arr[k]= arr[k-1];
    }
    arr[pos]=ele;
    printf("Elements of array after insertion of %d at position %d in \n",ele,pos);
    for(int j =0 ; j<6; j++)
    {
        printf("%d \n",arr[j]);
    }
    return 0;
}
