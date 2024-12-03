#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    printf("Enter Array elements of 1st Array: ");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
          scanf("%d",&a[i][j]);
    }
    }
    printf("Enter Array elements of 2nd Array: ");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
          scanf("%d",&b[i][j]);
    }
    }
     for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
            c[n][m]=a[n][m]+b[n][m];                                                                                                                                                   
    }
    }
    printf("Enter Array elements of 2nd Array: ");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
          printf("%d    ",c[i][j]);
    }
    printf("\n");
    }
   
}