#include<stdio.h>
void main()
{
    int n;
    printf("Enter The Size of Array!!");
    scanf("%d",&n);
    int *array;
    array=(int *)malloc(size*sizeof(int));
    printf("Enter The Array elements!!\n");
    for(i=0;i<n;i++)
       {
        scanf("%d",(array+i));
       }
    printf("/n");
    for(i=0;i<n;i++)
       {
        printf("%d",*());
       }
}