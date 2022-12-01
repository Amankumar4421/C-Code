#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of vertices: ");
    scanf("%d",&n);
    int a[n][n],key;
    printf("Enter Adjacency matrix\n");
    for(int i=0;i<n ;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("The Isolated vertices are : ");
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            c++;
        }
        if(c==n)
            printf("%c ",i+65);
    }
}