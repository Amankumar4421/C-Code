#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("E://C//story1.txt","r");
    if(fp1==NULL)
    {
        printf("Error!");
        exit(1);
    }
    fp2=fopen("D://C//story2.txt","r");
    if(fp2==NULL)
    {
        printf("Error!");
        exit(1);
    }
    fp3=fopen("D://C//file19.txt","w");
    if(fp3==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char a[1001],b[1001];
    while(!feof(fp1))
    {
        fgets(a,1001,fp1);
        fputs(a,fp3);
    }
    while (!feof(fp2))
    {
        fgets(b,1001,fp2);
        fputs(b,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}