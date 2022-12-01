#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int a[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int b[100000];
	int k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
		b[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=b[i];
}
void mergesort(int a[],int low,int high)
{
	if(low!=high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
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
	mergesort(a,0,n-1);
	end=clock();
	// for(int i=0;i<n;i++)
	// 	printf("%d ",a[i]);
	t=(double)(end - start)/CLOCKS_PER_SEC;
	printf("Execution Time : %lf\n",t);
	return 0;
}
