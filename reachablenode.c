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
    printf("Enter the starting node: ");
    scanf("%d",&key);
    printf("The Reachable nodes are : ");
    for(int i=0;i<n;i++)
    {
        if(a[key-1][i]==1)
            printf("%c ",65+i);
            
    }
}