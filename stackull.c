#include <stdio.h>
#include<stdlib.h>
void push();
void pop();
void print();
void peek();
struct node
{
    int data;
    struct node *next;
}*top=NULL,*new;
int main()
{
    int choice;
    do{
        printf("for push press 1\nfor pop press 2\nfor print element press 3\nfor peek press 4\nfor exit press 0\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                printf("Thank you");
                break;
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                peek();
                break;
            default :
                printf("Invalid Input\n\n");
        }
    }while(choice);
    return 0;
}
void push()
{
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
        printf("Overflow!\n\n");
    else
    {
        printf("Enter Data : ");
        scanf("%d",&new->data);
        new->next=top;
        top=new;
    }
}
void pop()
{
    if(top==NULL)
        printf("Underflow!\n\n");
    else
    {
        printf("%d poped.\n\n",top->data);
        top=top->next;
    }
}
void print()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
        printf("Empty stack!\n\n");
    else
    {
        printf("The element are : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n\n");
    }
}
void peek()
{
    if(top==NULL)
        printf("Empty stack!\n\n");
    else
        printf("The peek element is : %d\n\n",top->data);
}