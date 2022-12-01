#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[n],d[n],temp[n],job[n],res[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p[i],&d[i]);
        job[i]=i+1;
        temp[i]=0;
        res[i]=0;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]<p[j+1])
            {
                int t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
                t=d[j];
                d[j]=d[j+1];
                d[j+1]=t;
                t=job[j];
                job[j]=job[j+1];
                job[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=d[i]-1;j>=0;j--)
        {
            if(temp[j]==0)
            {
                temp[j]=i+1;
                res[i]=j+1;
                break;
            }
        }
    }
    printf("INDEX\tPROFIT\tDEADLINE\tSLOT ALLOTTED\n");
    for(i=0;i<n;i++)
        if(res[i]!=0)
        printf("J%d\t%d\t%d\t[%d-%d]\n",job[i],p[i],d[i],res[i]-1,res[i]);
        else
        printf("J%d\t%d\t%d\tREJECTED\n",job[i],p[i],d[i]);
    return 0;
}