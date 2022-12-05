#include <stdio.h>
int main()
{
    typedef struct
    {
        int id;
        char name[20];
        float salary;
    } emplo;

    int n = 2;
    emplo employee[n];
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:- \n", i + 1);

        // Name
        printf("Name: ");
        scanf("%[^\n]s",&employee[i].name);

        // ID
        printf("Id: ");
        scanf("%d", &employee[i].id);

        // Salary
        printf("Salary: ");
        scanf("%lf", &employee[i].salary);

        // to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }
}