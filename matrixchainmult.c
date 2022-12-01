#include<stdio.h>
int main()
{
    int n;
    printf("Enter No of Matrix : ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter Size Array : ");
    for(int i=0;i<=n;i++)
        scanf("%d",&a[i]);
    int res[n][n];
    for(int g=0;g<n;g++)
    {
        for(int i=0,j=g;j<n;j++,i++)
        {
            if(g==0)
                res[i][j]=0;
            else
            if(g==1)
                res[i][j]=a[i]*a[j]*a[j+1];
            else
            {
                int min=99999999,lc,mc,rc,tc;
                for(int k=i;k<j;k++)
                {
                    lc=res[i][k];
                    rc=res[k+1][j];
                    mc=a[i]*a[k+1]*a[j+1];
                    tc=lc+rc+mc;
                    if(tc<min)
                        min=tc;
                }
                res[i][j]=min;
            }
        }
    }
    printf("Minimum Multiplication Required : %d",res[0][n-1]);
}