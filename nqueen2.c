#include<stdio.h>
int n,count=1;
void solve(int b[n][n],int r,int c[],int nd[],int rd[],int res[n][n])
{
    if(r==n)
    {
        printf("Arrangement %d\n",count++);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    for(int col=0;col<n;col++)
    {
        if(c[col]==0 && nd[r+col]==0 && rd[r-col+n-1]==0)
        {
            b[r][col]=1;
            res[r][col]=1;
            c[col]=1;
            nd[r+col]=1;
            rd[r-col+n-1]=1;
            solve(b,r+1,c,nd,rd,res);
            res[r][col]=0;
            c[col]=0;
            nd[r+col]=0;
            rd[r-col+n-1]=0;
            b[r][col]=0;
        }
    }
}
int main()
{
    printf("Enter Size : ");
    scanf("%d",&n);
    int b[n][n],res[n][n],c[n],nd[2*n-1],rd[2*n-1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=0;
            res[i][j]=0;
        }
        c[i]=0;
    }
    for(int i=0;i<2*n-1;i++)
    {
        nd[i]=0;
        rd[i]=0;
    }
    solve(b,0,c,nd,rd,res);
}