#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("The Sorted Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}