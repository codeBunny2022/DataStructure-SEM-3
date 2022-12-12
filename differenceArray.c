#include<stdio.h>
#include<stdlib.h>
void main()
{
  int k=0;
  arr1[]={1,3,6,2,9};
  arr2[]={5,6,3,7,0};
  arr3[10]={0};
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=4;j++)
    {
       
        if(arr1[i]!=arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }
  }
  for(l=0;l<=9;l++)
  {
    printf("union of sets is\n");
    printf('%d',arr3[l]," ,");
  }
}