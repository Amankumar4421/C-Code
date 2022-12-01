#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quick(int a[],int low,int high)
{
	if(low<high)
	{
		int i=low,temp;
		int j=high;
		int pivot=low;
		while(i<j)
		{
			while(a[i]<=a[pivot]&& i<high)
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		quick(a,low,j-1);
		quick(a,j+1,high);
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
	quick(a,0,n-1);
	end=clock();
	t=(double)(end - start)/CLOCKS_PER_SEC;
	printf("Execution Time : %lf\n",t);
	return 0;
}
