#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    if(n>0)
    {
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i;j>0;j--)
            {
                if(a[j-1]>a[j])
                {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                }
            }
        }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    }
    else
    printf("Invalid Size");
    return 0;
}