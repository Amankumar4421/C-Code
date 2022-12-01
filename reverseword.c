#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j;
    gets(a);
    for(i=strlen(a);i>=0;i--)
    {
       if(a[i]==' '||i==0)
       {
            if(i==0)
            i=-1;
           for(j=i+1;j<strlen(a);j++)
           {
               if(a[j]==' ')
                break;
                printf("%c",a[j]);
           }
           printf(" ");
        } 
    } 
    return 0;
}