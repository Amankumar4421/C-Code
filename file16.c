#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char filename[30];
    FILE *fp;
    gets(filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char a[1000];
    int i,j=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s",a);
        if(j>0)
        printf("%s ",a);
        i=strcmp(a,"Moral");
        if(i==0)
        j++;
    }
    fclose(fp);
    return 0;
}