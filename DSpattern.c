#include<stdio.h>
int main()
{
    char d='A';
    for(int i=1;i<=4;i++)
    {
        for(int j =0;j<i;j++)
        {
            printf("%c",d);
        }
        d++;
        printf("\n");
    }
}
