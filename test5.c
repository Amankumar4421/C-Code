
#include <stdio.h>
int s;
int sum(int [],int ,int );
int main()
{
    int n;
    scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("%d",sum(a,n,0));
    return 0;
}
int sum(int a[],int n,int i)
{
    if(a[i]%2==0)
        s=a[i];
    if(i<n)
        return s+sum(a,n,i+1);

}