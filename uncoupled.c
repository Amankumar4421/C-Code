#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,j;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i]==a[j])
            c++;
        if(c==1)
        printf("%d\n",a[i]);
        c=0;
    }
    return 0;
}