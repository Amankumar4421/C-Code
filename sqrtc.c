#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("\n------------------------------------------------------");
    i=1;
    do
    {
        printf("\n|\t%d\t|\t%f\t|\t%f\t|",i,pow(i,2),pow(i,3));
        i++;
    } while (i<=n);
        printf("\n--------------------------------------------------\n");
    return 0;
}