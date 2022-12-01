#include <stdio.h>
void func(int a,int b,char s[], int n);
int main()
{
    int i,a,b;
    char s[50];
    scanf("%d%d",&a,&b);
    s[a+b]='\0';
    func(a,b,s,0);
    return 0;
}
void func(int a,int b,char s[],int n)
{
    if(a==0 && b==0)
    {
        printf("%s\n",s);
        return ;
    }
    if(a>0)
    {
        s[n]='A';
        func(a-1,b,s,n+1);
    }
    if(b>0)
    {
        s[n]='B';
        func(a,b-1,s,n+1);
    }
}