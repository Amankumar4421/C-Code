#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    float p[n],w[n];
    float pw[n],temp;
    for(i=0;i<n;i++)
        scanf("%f%f",&w[i],&p[i]);
    for(i=0;i<n;i++)
        pw[i]=(p[i]/w[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(pw[j]<pw[j+1])
            {
                temp=pw[j];
                pw[j]=pw[j+1];
                pw[j+1]=temp;
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
                temp=w[j];
                w[j]=w[j+1];
                w[j+1]=temp;
            }
        }
    }
    i=0;
    float sum=0,total=0,rc=m;
    while(1)
    {
        if(w[i]<=rc)
        {
            total+=p[i];
            rc-=w[i];
        }
        else
            break;
        i++;
    }
    total+=(p[i]*rc)/w[i];
    printf("Total Profit : %f",total);
}