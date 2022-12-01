#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i,max=0,r;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-2;i++)
        {
            int v1 = a[i]-a[i+1];
            int v2 = a[i+1]-a[i+2];
            int v3 = a[i+2]-a[i];
            if(v1<0)
                v1=-v1;
            if(v2<0)
                v2=-v2;
            if(v3<0)
                v3=-v3;
            int r=v1+v2+v3;
            if(r>max)
                max=r;
        }
        printf("%d\n",max);
    }
    return 0;
}