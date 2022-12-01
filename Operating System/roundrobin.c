// Round Robin process scheduling
#include<stdio.h>
void main()
{
	int n,i,j,qt,count=0,temp,sq=0,bt[100],wt[100],tat[100],rembt[100];
	float awt=0,atat=0;
	printf("Enter number of Process : ");
	scanf("%d",&n);
	printf("Enter the burst time of process\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		rembt[i]=bt[i];
	}
	printf("Enter Quantum time : ");
	scanf("%d",&qt);
	while(1)
	{
		for(i=0,count=0;i<n;i++)
		{
			temp=qt;
			if(rembt[i]==0)
			{
				count++;
				continue;
			}
			if(rembt[i]>qt)
				rembt[i]-=qt;
			else
				if(rembt[i]>=0)
				{
					temp=rembt[i];
					rembt[i]=0;
				}
			sq=sq+temp;
			tat[i]=sq;
		}
		if(count==n)
			break;
	}
	printf("process\tburst time\twaiting time\tturn Around time\n");
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
		awt+=wt[i];
	    atat+=tat[i];
		printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	printf("Average time %f\n",awt/n);
	printf("Average turn around time %f\n",atat/n);
}