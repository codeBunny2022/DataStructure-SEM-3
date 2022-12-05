#include <stdio.h>
int j = 0, count = 0;
void inputit()
{
    typedef struct
    {
        int id;
        char Bname[20];
        char auth[20];
    } book;
    int n = 0;
    // taking number of books
    printf("Enter number of books in Library:\n");
    scanf("%d", &n);
    // creating pointer array for book
    book data[n];
    // getting values
    for (; j < n; j++)
    {
        printf("ID: %d", j + 1);
        // name
        printf("\nName: ");
        scanf(" %[^\n]s", &data[j].Bname);
        // author name
        printf("\nAuthor's Name: ");
        scanf(" %[^\n]s", &data[j].auth);
    }
}
// adding a new book
void add()
{
    printf("Enter name of Book:\n");
    n++;
    j++;
    printf("ID: %d", j + 1);
    // name
    printf("\nName: ");
    scanf(" %[^\n]s", &data[j].Bname);
    // author name
    printf("\nAuthor's Name: ");
    scanf(" %[^\n]s", &data[j].auth);
}
// showing  all books under a given author and name
void display()
{
    printf("Enter name of Book you want to find:\n");
    typedef struct findit
    {
        char fname[20];
    };
    struct findit bby;
    scanf(" %[^\n]s", &bby.fname);
    for (int l = 0; l < n; l++)
    {
        if (data[l].Bname == bby.fname)
        {
            count++;
        }
    }
    printf("%d such books are present in library!!\n");
}
void main()
{
    inputit();
    add();
    display();
}