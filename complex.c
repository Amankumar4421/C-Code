#include<stdio.h>
struct complex
{
    float real,img;
}c1,c2;
int main()
{
    scanf("%f%f%*c",&c1.real,&c1.img);
    scanf("%f%f",&c2.real,&c2.img);
    printf("%.2f+%.2fi",c1.real+c2.real,c1.img+c2.img);
    return 0;
}