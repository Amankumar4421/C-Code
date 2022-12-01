#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("D://C//story3.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char ch;
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}