#include<stdio.h>//Dynamic Approach
int main()
{
    int n,target;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&target);
    int res[n+1][target+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<target+1;j++)
        {
            if(i==0 && j==0)
                res[i][j]=1;
            else
            if(i==0)
                res[i][j]=0;
            else
            if(j==0)
                res[i][j]=1;
            else
            {
                if(res[i-1][j]==1)
                    res[i][j]=1;
                else
                {
                    int val=a[i-1];
                    if(j>=val)
                    {
                        if(res[i-1][j-val]==1)
                            res[i][j]=1;
                    }
                }
            }

        }
    }
    if(res[n][target]==1)
        printf("True");
    else
        printf("False");
}