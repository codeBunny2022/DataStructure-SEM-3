#<include stdio.h>
void main()
{
  int a[3][3],b[3][3];
  printf("Enter the values of matrix 1");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the values of matrix 2");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
  printf("sum of matrix 1 and matrix 2 are\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d",a[i][j]+b[i][j]);
    }
  }

}