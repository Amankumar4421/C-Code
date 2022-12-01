#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
    int sum=0,a;
    if(argc<2)
        printf("No Input");
    else
    {
        for(int i=1;i<argc;i++)
        {
            a=atoi(argv[i]);
            sum+=a;
        }
        printf("%d ",sum);
    }
}