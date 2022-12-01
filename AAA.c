#include<stdio.h>
int main()
{
  int n,b,h,sum=0,sum1=0,max=0;
  scanf("%d",&n);
  int a[n],i,j,k;
  int z,temp,x=0;
  scanf("%d%d",&b,&h);
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    sum+=(a[i]*b*h);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
        if(a[i]<=a[j])
    	sum1+=(a[i]*b*h);
        else
        break;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[i]<=a[j])
        sum1+=(a[i]*b*h);
        else
        break;   
    }
    if(sum1>max)
      max=sum1;
      sum1=0;
  }
  printf("%d",sum-max);
  return 0;
}