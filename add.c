#include<stdio.h>
struct customer
{
    char name[50];
    char add[50];
    char city[50];
    char state[50];
    char acc[20];
    float amnt;
    int date;
    char mon[50];
    int year;
}c1;
int main()
{
    scanf("%s",c1.name);
    scanf("%*c%s",c1.add);
    scanf("%*c%s",c1.city);
    scanf("%*c%s%*c",c1.state);
    fgets(c1.acc,20,stdin);
    scanf("%f",&c1.amnt);
    scanf("%d",&c1.date);
    scanf("%s",c1.mon);
    scanf("%*c%d",&c1.year);
    printf("Name:%s\n",c1.name);
    printf("address:%s\n",c1.add);
    printf("city:%s\n",c1.city);
    printf("state:%s\n",c1.state);
    printf("accno:%s\n",c1.acc);
    printf("amount:%f\n",c1.amnt);
    printf("payment date:%d\n",c1.date);
    printf("month:%s\n",c1.mon);
    printf("year:%d",c1.year);
    return 0;
}