#include<stdio.h>
int main()
{
    int b=0,n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    printf("Enter Array elements: ");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
          scanf("%d",&a[i][j]);
    }
    }
     for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
    {
             if(0!=a[i][j])  
             {
                  b++;
             }                                                                                                                                                    
    }
    }
    if(b==0)
    printf("The given array is a Nul Matrix");
    else
     printf("The given array is a not Null Matrix");

}