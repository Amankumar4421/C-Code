#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter size of Array:");
	scanf("%d",&n);
	srand(time(0));
	int a[n],i;
	for(i=0;i<n;i++)
		a[i]=rand();
	clock_t start,end;
	double t;
	start=clock();
	bubble(a,n);
	end=clock();
	t=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Execution Time : %lf\n",t);
	return 0;
}
