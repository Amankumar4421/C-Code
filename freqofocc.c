#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],ch;
    gets(a);
    scanf("%c",&ch);
    int i,c=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==ch)
        c++;
    }
    printf("%d",c);
}