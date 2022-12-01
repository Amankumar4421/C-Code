#include <stdio.h>
int n,m;
int isSafe(int i,int j,int g[n][n],int color[])
{
    for(int k=0;k<n;k++)
    {
        if(g[i][k]==1 && color[k]==j)
            return 0;
    }
    return 1;
}
int solve(int g[n][n],int i,int color[])
{
    if(i==n-1)
    {
        return 1;
    }
    for(int j=0;j<m;j++)
    {
        if(isSafe(i,j,g,color))
        {
            color[i]=j;
            if(solve(g,i+1,color))
                return 1;
            color[i]=-1;
        }
    }
    return 0;
}
int main()
{
    scanf("%d%d",&n,&m);
    int g[n][n],color[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&g[i][j]);
        color[i]=-1;
    }
    if(solve(g,0,color))
        printf("Yes");
    else
    printf("No");  
}