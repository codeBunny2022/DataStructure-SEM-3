#include<stdio.h>
#include<math.h>
# define max 8
int arr[max];
void main()
{
    int i,j;
    printf("ENTER AND PRINT THE UNSORTED ELEMENT \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d\t",arr[i]);
    }

    mergeSort(0,7);
    printf("Sorted array are :\n");
    for(i=0;i<7;i++)
    {
        printf("%d\t", arr[i]);
    }
}
mergeSort(int low,int high)
{
    if(low!=high)
    {
        int mid;
        mid=(low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}

merge(int low, int mid, int high)
{
    int temp[max];
    int i= low;
    int k= low;
    int j=mid+1;
    while((i<=mid) && (j <= high))
    {
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=high)
        temp[k++]=arr[j++];
    for(i+low;i<high;i++)
    {
        arr[i]= temp[i];
    }
}

