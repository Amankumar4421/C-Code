#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[2*n-1][2*n-1];
    int t=2*n-1;
    int s=0;
    int temp=n;
    while(n!=0)
    {
        for(int i=s;i<t;i++)
        {
            for(int j=s;j<t;j++)
            {
                if(i==s||j==s||i==t-1||j==t-1)
                    a[i][j]=n;
            }
        }
        n--;
        t--;
        s++;
    }
    for(int i=0;i<2*temp-1;i++)
    {
        for(int j=0;j<2*temp-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}