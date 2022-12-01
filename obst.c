#include<stdio.h>
int main()
{
    int n,i,j,k,g,lf,rf,l;
    scanf("%d",&n);
    int key[n],freq[n],result[n][n];
    for(i=0;i<n;i++)
        scanf("%d",&key[i]);
    for(i=0;i<n;i++)
        scanf("%d",&freq[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            result[i][j]=0;
    for(g=0;g<n;g++)
    {
        for(i=0,j=g;j<n;j++,i++)
        {
            if(g==0)
                result[i][j]=freq[i];
            else
            if(g==1)
            {
                lf=freq[i];
                rf=freq[j];
                if((lf+2*rf)<(rf+2*lf))
                    result[i][j]=(lf+2*rf);
                else
                    result[i][j]=(rf+2*lf);
            }
            else
            {
                int min=99999,left,right;
                int sum=0;
                for(l=i;l<=j;l++)
                    sum+=freq[l];
                for(k=i;k<=j;k++)
                {
                    if(k==i)
                        left=0;
                    else
                        left=result[i][k-1];
                    if(k==j)
                        right=0;
                    else
                        right=result[k+1][j];
                    if(left+right+sum<min)
                        min=left+right+sum;
                }
                result[i][j]=min;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%-4d",result[i][j]);
        }
        printf("\n");
    }
}
