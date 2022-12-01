#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int i,d=0,ul=0,sc=0,n;
    scanf("%d",&n);
    scanf("%s",a);
    if(n>7)
    {
        for(i=0;i<strlen(a);i++)
        {
            if(isdigit(a[i]))
            d++;
            else
            if(isalpha(a[i]))
            ul++;
            else
            if(a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='&'||a[i]=='*'||a[i]=='('||a[i]==')'||a[i]=='-'||a[i]=='+')
            sc++;
        }
        if(d>0&&ul>0&&sc>0)
        printf("password is strong.\n");
        else
        printf("password is not strong.\n");
    }
    else 
    printf("password is not strong.\n");
}