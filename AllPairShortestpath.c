#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0 && i!=j)
                a[i][j]=99999;
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(i==k||k==j||a[i][j]==0)
               continue;
               else
               if((a[i][k]+a[k][j])<a[i][j])
               a[i][j]=a[i][k]+a[k][j];
            }
        }
    }
    for(int  i=0;i<n;i++)
    {
        for(int  j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}