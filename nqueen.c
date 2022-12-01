#include<stdio.h>
int n,c=1;
int isSafe(int arr[n][n],int x,int y,int n)
{
    for(int row=0;row<x;row++)
    {
        if(arr[row][y]==1)
            return 0;
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
            return 0;
        col--;
        row--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
            return 0;
        row--;
        col++;
    }
    return 1;
}
int nQueen(int arr[n][n],int x,int n)
{
    if(x>=n)
    {
        printf("Arrangement %d\n",c++);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
    for(int col=0;col<n;col++)
    {
        if(isSafe(arr,x,col,n)==1)
        {
            arr[x][col]=1;
            if(nQueen(arr,x+1,n)==1)
                return 1;
        }     
        arr[x][col]=0;
    }
    return 0;
}
int main()
{
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    nQueen(a,0,n);
}