#include<stdio.h>
#include<ctype.h>
void pop();
void push(char);
char stack[10];
char str[100];
int i=0,top=-1;
int main()
{
    printf("Enter the infix operation : ");
    gets(str);
    int c;
    printf("The postfix Expression is : ");
    while(str[i]!='\0')
    {
        if(isalnum(str[i]))
            printf("%c",str[i]);
        else
        if(str[i]=='(')
            push(str[i]);
        else
        if(str[i]==')')
        {
            while(stack[top]!='(')
                pop();
            pop();
        }
        else
        if(str[i]=='+'||str[i]=='-')
        {
            while(top!=-1&&stack[top]!='(')
            {
                pop();
            }
            push(str[i]);
        }
        else
        if(str[i]=='*'||str[i]=='/')
        {
            while(stack[top]=='*'||stack[top]=='/'||stack[top]=='^')
            {
                pop();
            }
            push(str[i]);
        }
        else
        if(str[i]=='^')
        {
            push(str[i]);
        }
        i++;
    }
    while(top!=-1)
        pop(stack[top]);
    printf("\ncompleted.");
    return 0;
}
void push(char ch)
{
    stack[++top]=ch;
}
void pop()
{
    if(stack[top]!='('&&stack[top]!=')')
        printf("%c",stack[top--]);
    else
        top--;
}