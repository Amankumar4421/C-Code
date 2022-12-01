//First Come First Server with Waiting time
#include<stdio.h>
void main()
{
    int i,j,n,bt[10],at[10],wt[10],tat[10],temp[10];
    float awt=0,atat=0;
    printf("Enter number of process : ");
    scanf("%d",&n);
    printf("Enter the burst time of the process\n");
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
    printf("Enter the arrival time of the process\n");
    for(i=0;i<n;i++)
        scanf("%d",&at[i]);
    temp[0]=0;
    printf("process\tburst time\twaiting time\tturn Around time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat+=tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("Average time %f\n",awt/n);
	printf("Average turn around time %f\n",atat/n);
}