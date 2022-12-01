#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,sum=0,c[26],r=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65&&a[i]<=90)
        c[a[i]-65]=1;
        if(a[i]>=97&&a[i]<=122)
        c[a[i]-97]=1;
    }
    for(i=0;i<26;i++)
    {
        if(c[i]==1)
            continue;
        else
            r=1;
    }
    if(r==1)
    printf("Given string is not pangram.");
    else
    printf("Given string is pangram.");
}