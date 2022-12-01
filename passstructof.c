#include<stdio.h>
struct complex
{
    float ar,br;
    float bi,ai;
}var1;
void fun(struct complex);
int main()
{
    scanf("%f%f%*c",&var1.ar,&var1.ai);
    scanf("%f%f",&var1.br,&var1.bi);
    fun(var1);
}
void fun(struct complex var1)
{
    printf("sum=%.1f+%.1fi\n",var1.ar+var1.br,var1.ai+var1.bi);
}
