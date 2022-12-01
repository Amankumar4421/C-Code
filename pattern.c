#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||(i+j)==n-1)
                printf("1 ");
            else
            if((i+j)<n)
            {
                if(i>j)
                {
                    c=0;
                    for(int k=j;k<n;k++)
                    {
                        if(k==i||(k+i)==n-1)
                            break;
                        c++;
                    }
                    printf("%d ",c+1);
                }
                else
                {
                    c=0;
                    for(int k=i;k<n;k++)
                    {
                        if(k==j||(k+j)==n-1)
                            break;
                        c++;
                    }
                    printf("%d ",c+1);
                }
            }
            else
            {
                if(i>j)
                {
                    c=0;
                    for(int k=i;k>=0;k--)
                    {
                        if(k==j||(k+j)==n-1)
                            break;
                        c++;
                    }
                    printf("%d ",c+1);
                }
                else
                {
                    c=0;
                    for(int k=j;k>=0;k--)
                    {
                        if(k==i||(k+i)==n-1)
                            break;
                        c++;
                    }
                    printf("%d ",c+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}