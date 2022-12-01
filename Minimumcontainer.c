#include<stdio.h>
int main()
{
    int n,c=0,z=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=99999;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;;j++)
        {
            if(a[i]<b[j]){
                b[j]=a[i];
                break;
            }
        }
    }
    int i=0;
    while(b[i]!=99999)
        i++;
    printf("%d",i);

}