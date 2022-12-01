#include<stdio.h>
int main()
{
    int a[100][100],b[50],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        for(j=0;j<b[i];j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<b[i];j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}