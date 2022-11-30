#include<stdio.h>
int A[10]={1,2,3,4,5,6,7,8,9,10},LB,UB,ITEM,LOC,BEG,MID,END;
int binarySearch(A,LB,UB,ITEM,LOC)
{
        BEG=LB;
        END=UB;
        MID=int((BEG+END)/2);
    while(BEG<=END && A[MID]!=ITEM):
    {

        if(ITEM<A[MID])
        {
            END=MID-1;
        }
        ELSE
        {
            BEG=MID+1;
        }
        MID=int((BEG+END)/2);
        if(A[MID]==ITEM)
        {
            LOC=MID;
        }
        else
        {
            LOC=NIL;
        }
    }
    return LOC;
}
int main()
{
   LB=0;
   UB=9;
   ITEM=5;
   int pos=binarySearch(A,LB,UB,ITEM);
   printf("%d",&pos);
}
