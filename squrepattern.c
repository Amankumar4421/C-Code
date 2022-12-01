#include<stdio.h>
int main()
{
    int n,i,j,k,c;
    printf("Enter size : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=n;
        for(j=0;j<=i;j++)
        {
            printf("%d ",c--);
        }
        c=n-i;
        for(j=2*i;j<2*n;j++)
        {
            printf("%d ",c);
        }
        c=n-i;
        for(j=0;j<i;j++)
        {
            printf("%d ",++c);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        c=n;
        for(j=i;j<n;j++)
        {
            printf("%d ",c--);
        }
        c=i;
        for(j=2*i;j>=0;j--)
        {
            printf("%d ",c);
        }
        c=i+1;
        for(j=i;j<n;j++)
        {
            printf("%d ",c++);
        }
        printf("\n");
    }
}