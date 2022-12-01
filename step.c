#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	int i,j,a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=b[i])
		{
			while(a[i]!=n)
			{
				a[i]=a[i]-b[i];
				c++;
			}
			if(i==n-1)
				printf("%d",c);
		}
		else
		if(i==n-1)
		printf("-1");
	}
	return 0;
}