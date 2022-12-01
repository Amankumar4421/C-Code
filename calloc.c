#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    return 0;
}