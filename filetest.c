#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("E://C//file19.txt","r");
    if(fp==NULL)
    {
        printf("File not opened!");
        exit (1);
    }
    FILE *aman;
    aman=fopen("E://C//Nitish.txt","w");
    if(aman==NULL)
    {
        printf("File not opened!");
        exit (1);
    }
    char a[1000];
    while (!feof(fp))
    {
        fgets(a,1000,fp);
        fputs(a,aman);
    }
    fclose(fp);
    fclose(aman);
}