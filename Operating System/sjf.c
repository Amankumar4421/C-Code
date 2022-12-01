// Shortest job First
#include<stdio.h>
#define max 30
void main()
{
	int i,n,j,p[max],bt[max],wt[max],tat[max];
	float awt=0,atat=0;
	printf("Enter the number of process");
	scanf("%d",&n);
	printf("Enter the burst time of the process\n");
	for(i=0;i<n;i++)
    {
		scanf("%d",&bt[i]);
        p[i]=i+1;
    }
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(bt[j]>bt[j+1])
            {
                int temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
	}
	printf("process\tburst time\twaiting time\tturn around time\n");
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt+=wt[i];
		atat+=tat[i];
		printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("Average wting Time : %f\n",awt);
	printf("Average TurnAround Time : %f\n",atat);
}