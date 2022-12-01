#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("E://C//story1.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char w;
    int cc=0,lc=1,wc=0;
    while ((w=fgetc(fp))!=EOF)
    {
        if(w==' ')
        wc++;
        if(w=='\n')
        lc++;
        cc++;
    }
    printf("char count=%d\nword count=%d\nline count=%d\n",cc,wc,lc);
    fclose(fp);
    return 0;
}