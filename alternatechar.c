#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    int n,i;
    n=strlen(a)>strlen(b)?strlen(a):strlen(b);
    for(i=0;i<n;i++)
    {
        if(a[i]!='\0')
        printf("%c",a[i]);
        if(b[i]!='\0')
        printf("%c",b[i]);
    }
}