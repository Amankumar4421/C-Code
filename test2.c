#include<stdio.h>
int main()
{
	int t,temp,c=0;
	long sum=0,i,j,m,n,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%ld%ld",&n,&m);
		int a[m];
		for(j=0;j<m;j++)
		scanf("%d",&a[j]);
		for(i=0;i<m;i++)
		{
			for(j=i;j<m;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(j=0;j<m;j++)
		{
			sum+=a[j];
			if(sum<=n)
			c++;
			else
			break;
		}
		printf("%d\n",c);
		sum=0;
		c=0;
	}
	return 0;
}