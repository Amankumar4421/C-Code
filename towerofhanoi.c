#include<stdio.h>
#include<time.h>
void towerOfHanoi(int n,char source,char dest,char aux)
{
    if(n==0)
        return;
    else
    {
        towerOfHanoi(n-1,source,aux,dest);
        printf("Move disc from %c to %c\n",source,dest);
        towerOfHanoi(n-1,aux,dest,source);
    }
}
int main()
{
    int n;
    printf("Enter No of Disc : ");
    scanf("%d",&n);
    clock_t start,end;
    start =clock();
    towerOfHanoi(n,'A','C','B');
    end = clock();
    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Execution time : %lf ",t);
}