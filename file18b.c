#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("E://C//text.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char name[30];
    int rn;
    float marks;
    int n,i;
    printf("Enter number of student :");
    scanf("%d%*c",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter student name: ");
        gets(name);
        fflush(stdin);
        printf("\nEnter student roll no and marks: ");
        scanf("%d%f%*c",&rn,&marks);
        fprintf(fp,"%s\n%d\n%f\n",name,rn,marks);
    }
    fclose(fp);
    return 0;
}