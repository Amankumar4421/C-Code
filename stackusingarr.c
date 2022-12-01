#include<stdio.h>
int n=10;
int stack[10];
int top=-1;
void push();
void pop();
void traverse();
int main()
{
    int ch;
    do
    {
        printf("For push element press 1\nFor pop element press 2\nFor traverse press 3\nFor exit press 0\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 0:
                printf("Thank you");
                break;
            default :
                printf("Invalid Input\n");
        }
    }while(ch);
    return 0;
}
void push()
{
    int a;
    printf("Enter element : ");
    scanf("%d",&a);
    if(top==n-1)
        printf("Overflow!\n");
    else
    {
        stack[++top]=a;
        printf("done.\n");
    }
}
void pop()
{
    if(top==-1)
        printf("Underflow!\n");
    else
        printf("%d poped.\n",stack[top--]);

}
void traverse()
{
    if(top==-1)
        printf("Empty Stack!\n");
    else
    {
        printf("The elements are : ");
        for(int i=top;i>=0;i--)
            printf("%d ",stack[i]);
        printf("\n");
    }
}