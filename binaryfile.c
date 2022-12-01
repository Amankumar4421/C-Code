#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
            fp=fopen("D://C//input1.txt","r");
        else
        if(i==2)
            fp=fopen("D://C//input2.txt","r");
        else
        if(i==3)
            fp=fopen("D://C//input3.txt","r");
        else
        if(i==4)
            fp=fopen("D://C//input4.txt","r");
        else
            fp=fopen("D://C//input5.txt","r");
        if(fp==NULL)
        {
            printf("Error!");
            exit(1);
        }
        int a[100000],j=0,key,c=0;
        scanf("%d",&key);
        while(!feof(fp))
        {
            fscanf(fp,"%d",&a[j++]);
        }
        int lb=0;
        int ub=j-2;
        while(lb<=ub)
        {
            
            int mid=(lb+ub)/2;
            printf("%d\n",a[mid]);
            if(a[mid]==key)
            {
                break;
            }
            else
            if(a[mid]<key)
                lb=mid+1;
            else
                ub=mid-1;
            c++;
        }
        printf("%d\n",c);
        fclose(fp);
    }
}