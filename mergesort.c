#include<stdio.h>
void merge(int a[],int ,int ,int );
void mergesort(int a[],int ,int );
int main()
{
    int n,i;
    printf("Enter size of the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);

    printf("The sorted Elements are : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;
}
void mergesort(int a[],int low,int high)
{
    if(low!=high)
    {
        int mid;
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int temp[100];
    int i=low;
    int k=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=mid)
    temp[k++]=a[i++];
    while(j<=high)
    temp[k++]=a[j++];
    for(i=0;i<=high;i++)
        a[i]=temp[i];
}