#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("E://C//17.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char a[400];
    int i,c=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s",a);
        i=strcmp(a,"Computer");
        if(i==0)
        c++;
    }
    printf("Computer is found at %d locations\n",c);
    fclose(fp);
    return 0;
}