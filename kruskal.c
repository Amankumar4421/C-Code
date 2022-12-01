#include<stdio.h>
int find(int i,int p[])
{
    while(p[i])
        i=p[i];
    return i;
}
int uni(int i,int j,int p[])
{
    if(i!=j)
    {
        p[j]=i;
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,j,k,ne=1,min,a,b,u,v,mincost=0;
    scanf("%d",&n);
    int cost[n][n],res[n][n],p[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=9999;
            res[i][j]=0;
        }
        p[i]=0;
    }
    while(ne<n)
    {
        min=9999;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u,p);
        v=find(v,p);
        if(uni(u,v,p))
        {
            ne++;
            res[a][b]=res[b][a]=min;
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=9999;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
    printf("minimum cost of spanning tree=%d ",mincost);
    return 0;
}