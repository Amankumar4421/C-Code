#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,sum=1,c=0;
    scanf("%lld",&n);
    while(n--)
    {
        long long int a;
        scanf("%lld",&a);
        while(1)
        {
            if(a%10==0)
            {
                c++;
                a=a/10;
            }
            else{
            if(a!=1)
            {
                sum*=a;
            }
            break;
            }
        }
        
    }
    printf("%lld",sum);
    for(int i=0;i<c;i++)
        printf("0");
    return 0;
}
