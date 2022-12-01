#include<stdio.h>
#include<stdlib.h>
void create();
void print();
void insert();
void delete();
void search();
void rev();
struct node
{
    int data;
    struct node *next;
};
struct node *temp,*head,*new,*ptr;
int l=0;
int main()
{
    int x=1;
    while(x)
    {
        printf("to create press 1\nto print press 2\nto insert element press 3\nto delete element press 4\nto search element press 5\nto reverse press 6\nto exit press 0\n");
        scanf("%d",&x);
        switch(x)
        {
            case 0:
                break;
            case 1:
                create();
                break;
            case 2:
                print();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                search();
                break;
            case 6:
                rev();
                break;
            default :
                printf("Invalid Input\n");
        }
    }
    return 0;
}
void create()
{
    head=NULL;
    int ch=1;
    while(ch)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
            head=temp=new;
        else
        {
            temp->next=new;
            temp=new;
        }
        printf("Enter 1 for continue or 0 for exit:");
        scanf("%d",&ch);
        l++;
    }
    printf("linked list created.\n");
}
void print()
{
    if(head==NULL)
    printf("Empty linked list\n");
    else
    {
        temp=head;
        printf("The elements are : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void insert()
{
    if(head==NULL)
    printf("Empty linked list\n");
    else
    {
        int loc;
        printf("where you want to insert element\nfor beg press 1\nfor end press -1 \nfor particular location press location\n");
        scanf("%d",&loc);
        if(loc==1)
        {
            new=(struct node *)malloc(sizeof(struct node));
            printf("Enter the data : ");
            scanf("%d",&new->data);
            new->next=head;
            head=new;
            printf("done\n");
            l++;
        }
        else if(loc==-1)   
        {
            new=(struct node *)malloc(sizeof(struct node));
            printf("Enter the data : ");
            scanf("%d",&new->data);
            new->next=NULL;
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new;
            printf("done\n");
            l++;
        }
        else if(l>=loc)
        {
            temp=head;
            new=(struct node *)malloc(sizeof(struct node));
            printf("Enter the data : ");
            scanf("%d",&new->data);
            for(int i=1;i<loc-1;i++)
                temp=temp->next;
            new->next=temp->next;
            temp->next=new;
            printf("done\n");
            l++;
        }
        else
        printf("Enter Correct location!\n");
    }
}
void delete()
{
    if(head==NULL)
    printf("Empty Linked List\n");
    else
    {
        int pos;
        printf("to delete at beggning press 1\nto delete at last press -1\nto delete at any position press that position\n");
        scanf("%d",&pos);
        if(pos==1)
        {
            ptr=head;
            head=head->next;
            free(ptr);
            l--;
        }
        else
        if(pos==-1)
        {
            temp=head;
            while(temp->next->next!=NULL)
                temp=temp->next;
            free(temp->next);
            temp->next=NULL;
            l--;
        }
        else if(l>=pos)
        {
            temp=head;
            pos=pos-2;
            while (pos--)
                temp=temp->next;
            ptr=temp->next;
            temp->next=temp->next->next;
            free(ptr);
            l--;
        }
        else
        printf("Enter Correct location!\n");
        printf("done\n");
    }
}
void search()
{
    int a,c=0;
    if(head==NULL)
        printf("Empty linked list\n");
    else
    {
        printf("Enter key element : ");
        scanf("%d",&a);
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data==a)
            {
                printf("Element found.\n");
                c=1;
                break;
            }           
            temp=temp->next;
        }
        if(c!=1)
        printf("Element not found.\n");
    }
}
void rev()
{
    if(head==NULL)
        printf("Emptly linked list.");
    else
    {
        struct node *cur,*nextnode=NULL,*prev=NULL;
        cur=head;
        while(cur!=NULL)
        {
            nextnode=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextnode;
        }
        head=prev;
        printf("Linked list reversed\n");
    }
}