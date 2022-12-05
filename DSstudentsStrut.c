#include <stdio.h>
int main()
{
    typedef struct
    {
        char name[20];
        int rollno;
    } student;
    int n;
    printf("Enter the number of students!!\n");
    scanf(" %d", &n);
    student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Serial Number: %d", i + 1);
        // Name
        printf("\nName: ");
        scanf(" %[^\n]s", & s[i].name);
        // ID
        printf("Roll Number: ");
        scanf(" %d", & s[i].rollno);

         // to consume extra '\n' input
        char ch = getchar();
        printf("\n");
        // END OF CODE
    }
    return 0;
}