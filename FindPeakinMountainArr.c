#include <stdio.h>

int findPeak(int a[],int n)
{
    int start = 0;
    int end = n-1;
    while(start!=end)
    {
        int mid = start + (end - start)/2;
        if(a[mid]>a[mid+1])
            end = mid;
        else
            start = mid+1;
    }
    return a[start];
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",findPeak(a,n));

    return 0;
}