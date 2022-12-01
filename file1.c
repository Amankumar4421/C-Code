#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fp;
    fp=fopen("D://C//a.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char a[2000];
    fgets(a,100,fp);
    printf("%s",a);
    fclose(fp);
}