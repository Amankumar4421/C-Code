#include<stdio.h>
#include<string.h>
int main()
{
    char s[102],t[102];
    int i,l,j=0;
    printf("enter string\n");
    scanf("%s",s);
    l=strlen(s);
    for(i=l-1;i>=0;i--,j++)
    {
        t[j]=s[i];
    }
    t[i]='\0';
    for(i=0;i<l;i++)
    {
        if(s[i]!=t[i])
        {
            printf("string is not palindrome");
            break;
            }
        else
        {
        if(i==l-1)
        printf("string is palaindrome");
        continue;
        }
    }
    return 0;

}