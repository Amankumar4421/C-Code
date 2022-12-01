#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*one,*two,*three,*temp;
int main()
{
    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    printf("Enter three node data: ");
    scanf("%d%d%d",&one->data,&two->data,&three->data);
    one->next=two;
    one->prev=NULL;
    two->next=three;
    two->prev=one;
    three->next=NULL;
    three->prev=two;
    head=one;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=three;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    return 0;
}