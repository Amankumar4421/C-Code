#include<stdio.h>
#include<stdlib.h>
long long int c=0;
void quick(int a[],int start,int end)
{
    if(start<end)
    {
        int i=start,temp;
        int j=end;
        int pivot=start;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<end)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                c++;
            }
        }
        temp=a[j];
        a[j]=a[pivot];
        a[pivot]=temp;
        c++;
        quick(a,start,j-1);
        quick(a,j+1,end);
    }
}
int main()
{
    int n;
    FILE *fptr;
    fptr=fopen("D://C//Number.txt","r");
    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    int a[100000],j=0;
    while(!feof(fptr))
    {
        fscanf(fptr,"%d",&a[j++]);
    }
    quick(a,0,j-2);
    printf("%lld\n",c);
    c=0;
    fclose(fptr);
    return 0;
}