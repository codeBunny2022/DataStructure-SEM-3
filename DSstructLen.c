#include <stdio.h>
void main()
{
    int i = 0, f = 0;
    typedef struct
    {
        int feet, inches;
    } Len;
    // creating  array and summing values
    int n = 2;
    Len data[n];
    // getting values
    for (int j = 0; j < n; j++)
    {
        printf("Enter value %d \n Feet:", j + 1);
        scanf(" %d", &data[j].feet);
        printf("Inches: ");
        scanf(" %d", &data[j].inches);
        i = i + data[j].inches;
        f = f + data[j].feet;
    }
    printf("\nFinal length is %d Feet and %d Inches.", f, i);
}