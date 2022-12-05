#include <stdio.h>
void main()
{
    int sum = 0, pro = 1, sub = 0;
    typedef struct val
    {
        int n1, n2;
    };
    struct val data;
    printf("Enter First value\n Number 1:");
    scanf(" %d", &data.n1);
    printf("Number 2: ");
    scanf(" %d", &data.n2);
    sum = data.n1 + data.n2;
    pro = data.n1 * data.n2;
    sub = data.n1 - data.n2;
    printf("\nFinal SUM: %d \nPRODUCT: %d \nDifference: %d", sum, pro, sub);
}