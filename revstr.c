#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],t;
    scanf("%s",a);
    int i,n;
    n=strlen(a)-1;
    for(i=0;i<strlen(a)/2;i++)
    {
        t=a[i];
        a[i]=a[n];
        a[n--]=t;
    }
    printf("%s\n",a);
}
