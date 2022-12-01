#include<stdio.h>
#include<stdlib.h>
void create();
void print();
void insert();
void delete();
void printrev();
void search();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp,*new,*last;
int l=0;
int main()
{
    int x=1;
    while(x)
    {
        printf("to create press 1\nto print press 2\nto insert element press 3\nto delete element press 4\nto print reverse press 5\nto search an element press 6\nto exit press 0\n");
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
                printrev();
                break;
            case 6:
                search();
                break;
            default:
                printf("Invalid number\n");
        }
    }
    return 0;
}
void create()
{
    head=NULL;
    int c=1;
    while(c==1)
    {
        printf("Enter data:");
        new=malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        new->prev=NULL;
        l++;
        if(head==NULL)
            head=temp=new;
        else
        {
            temp->next=new;
            new->prev=temp;
            temp=new;
        }
        last=temp;
        printf("for another element press 1\nfor end press 0\n");
        scanf("%d",&c);
    }
    printf("doubly Linked list created.\n");
}
void print()
{
    if(head==NULL)
    printf("Empty linked list\n");
    else
    {
        temp=head;
        printf("The Elements are : ");
        while (temp!=NULL)
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
        int pos;
        printf("Where you want to Insert -\nfor beg press 1\nfor end press -1\nfor at position press position\n");
        scanf("%d",&pos);
        if(pos==-1||(pos<=l&&pos>=1))
        {
            printf("Enter data : ");
            new=malloc(sizeof(struct node));
            scanf("%d",&new->data);
            new->next=NULL;
            new->prev=NULL;
            if(pos==1)
            {
                head->prev=new;
                new->next=head;
                head=new;
                l++;
            }
            else
            if(pos==-1)
            {
                last->next=new;
                new->prev=last;
                last=new;
                l++;
            }
            else if(l>=pos)
            {
                temp=head;
                for(int i=0;i<pos-2;i++)
                    temp=temp->next;
                new->prev=temp;
                new->next=temp->next;
                temp->next->prev=new;
                temp->next=new;
                l++;
            }
            printf("Insertion done\n");
        }
        else
            printf("Invalid position\n");
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
        if(pos==-1||(pos>=1&&pos<=l))
        {
            if(pos==1)
            {
                temp=head;
                head=head->next;
                head->prev=NULL;
                free(temp);
                l--;
            }
            else
            if(pos==-1)
            {
                temp=last;
                last=last->prev;
                last->next=NULL;
                free(temp);
                l--;
            }
            else if(l>=pos)
            {
                temp=head;
                pos=pos-2;
                while (pos--)
                    temp=temp->next;
                temp->next=temp->next->next;
                free(temp->next->prev);
                temp->next->prev=temp;
                l--;
            }
            printf("done\n");
        }
        else
            printf("Invalid position!\n");

    }
}
void printrev()
{
    if(head==NULL)
    printf("Empty linked list\n");
    else
    {
        temp=last;
        printf("The revese elements are : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        printf("\n");
    }
}
void search()
{
    if(head==NULL)
        printf("Empty linked list!\n");
    else
    {
        int a,c=0;
        printf("Enter Key element : ");
        scanf("%d",&a);
        temp=head;
        while (temp!=NULL)
        {
            if(temp->data==a)
            {
                printf("Element Found.\n");
                c=1;
                break;
            }
            temp=temp->next;
        }
        if(c!=1)
            printf("Element not found.\n");
    }
}