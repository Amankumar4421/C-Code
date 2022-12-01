#include<stdio.h>
void ssort(int a[],int n)
{
    int i,j,temp,small;
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[small])
                small=j;
            temp=a[i];
            a[i]=a[small];
            a[small]=temp;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    ssort(a,n);
    print(a,n);
    return 0;
}