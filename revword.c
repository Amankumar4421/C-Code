#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int j=strlen(a);
    for(int i=j-1;i>=0;i--)
    {
       if(a[i]==' ')
       {
          a[i]='\0';
        printf("%s ",&(a[i])+1);
       } 
    }
printf("%s",a);
}