#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binary(int a[],int lb,int ub,int key)
{
	while(lb<=ub)
	{
		int mid=(lb+ub)/2;
		if(a[mid]==key)
			return mid;
		else
		if(a[mid]>key)
			ub=mid-1;
		else
			lb=mid+1;
	}
	return 0;
}
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
	int n,key,index,i;
	clock_t start,end;
	scanf("%d",&n);
	int a[n];
	printf("Enter the key :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
		a[i]=rand()%100;
	quick(a,0,n-1);
	start=clock();
	index=binary(a,0,n-1,key);
	end=clock();
	double t=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Execution time : %lf\n",t);
	if(index==0)
		printf("Element Not Found\n");
	else
		printf("Element Found at %d location\n",index);
	return 0;
}
