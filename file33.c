#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *raju;
    raju=fopen("E://C//story4.txt","r");
    if(raju==NULL)
    {
        printf("File not opened!");
        exit (1);
    }
    char a[110];
    int d=0;
    while (!feof(raju))
    {
        fscanf(raju,"%s",a);
        if(d>0)
        printf("%s ",a);
        if(strcmp(a,"crowded")==0)
        d++;
    }
    fclose(raju);
}