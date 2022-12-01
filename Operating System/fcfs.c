// first come first serve
#include<stdio.h>
void main()
{
    int i,j,n,bt[100],wt[100],tat[100];
    float awt=0,atat=0;
    printf("Enter Number of process : ");
    scanf("%d",&n);
    printf("Enter the burst time of the process");
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
    printf("process\tburst time\twaiting time\tturn Around time\n");
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
    printf("Average time %f\n",awt/n);
	printf("Average turn around time %f\n",atat/n);
}