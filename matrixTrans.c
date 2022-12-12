#<include stdio.h>
void main()
{
  int a[3][3],b[3][3];
  printf("Enter the values of matrix to find transpose!!");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d",a[i][j]=b[j][i]);
    }
  }
    printf("the values of matrix after transpose!!");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
       printf("%d",b[i][j]);
    }
  }
}