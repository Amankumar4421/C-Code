#include<stdio.h>
int n;
int mkey(int k[],int mst[])
{
    int m=9999,min,i;
    for(i=0;i<n;i++)
    {
        if(mst[i]==0 && k[i]<m)
        {
            m=k[i];
            min=i;
        }
    }
    return min;
}
int main()
{
    int i,j,c,e,v,sum=0;
	printf("Enter no of vertex : ");
    scanf("%d",&n);
    int g[n][n],a[n][n],p[n],k[n],mst[n];
	printf("Enter Adjacency matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
            a[i][j]=0;
        }
        k[i]=9999;
        mst[i]=0;
    }
    k[0]=0;
    p[0]=-1;
    for(i=0;i<n-1;i++)
    {
        e=mkey(k,mst);
        mst[e]=1;
        for(j=0;j<n;j++)
        {
            if(g[e][j] && mst[j]==0 && g[e][j]<k[j])
            {
                p[j]=e;
                k[j]=g[e][j];
            }
        }
    }
    for(i=1;i<n;i++)
    {
        a[p[i]][i]=g[i][p[i]];
        a[i][p[i]]=g[i][p[i]];
        sum+=g[i][p[i]];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Total cost of spanning tree=%d",sum);
    return 0;
}