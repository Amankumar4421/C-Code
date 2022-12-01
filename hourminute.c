#include<stdio.h>
int main()
{
    int n,rem,h=0,s,m=0;
    printf("Enter seconds:");
    scanf("%d",&n);
    while(n>=3600)
    {
        n=n-3600;
        h++;
    }
    while(n>=60)
    {
        n=n-60;
        m++;
    }
    printf("%d:%d:%d",h,m,n);
    return 0;
}