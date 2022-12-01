#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("D://C//Number.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    int a[10000],i=0,j,n;
    long long int c=0;
    fscanf(fp,"%d",&n);
    //printf("%d\n",n);
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
        a[i++]=n;
        printf("%d\n",n);
        fscanf(fp,"%d",&n);
        ch=fgetc(fp);
    }
    printf("%d\n",i);
    n=i;
    //printf("%d\n",n);
    // for(i=0;i<n;i++)
    //     printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
    }
    printf("%lld",c);
    fclose(fp);
    return 0;
}