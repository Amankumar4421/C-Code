#include<stdio.h>
void push();
void pop();
void display();
int que[5];
int rear=-1,front=-1,n=5;
int main()
{
    int ch=1;
    while(ch)
    {
        printf("for enqueue press 1\nfor dequeue press 2\nfor display press 3\nfor exit pres 0\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            break;
        default:
            printf("Invalid input!\n");
            break;
        }
    }
}
void push()
{
    int a;
    if((rear+1)%n==front)
        printf("overflow!\n");
    else
    {
        printf("Enter the data : ");
        scanf("%d",&a);
        if(front==-1&&rear==-1)
            front=rear=0;
        else
            rear=(rear+1)%n;
        que[rear]=a;
        printf("%d inserted\n",a);
    }
}
void pop()
{
    if(front==-1&&rear==-1)
        printf("Underflow!\n");
    else
    if(front==rear){
        printf("%d dequeued.\n",que[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d dequeued.\n",que[front]);
        front=(front+1)%n;
    }
}
void display()
{
    if(front==-1)
        printf("Queue is Empty!\n");
    else
    {
        printf("The element are : ");
        printf("%d ",que[front]);
        for(int i=front;i!=rear;)
        {
            i=((i+1)%n);
            printf("%d ",que[i]);
        }
        printf("\n");
    }
}
