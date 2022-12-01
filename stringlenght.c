#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    fgets(a,100000,stdin);
    printf("%d",strlen(a));
    return 0;
}