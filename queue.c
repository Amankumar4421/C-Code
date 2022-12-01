#include<stdio.h>
void enqueue();
void dequeue();
void display();
int que[10];
int rear=-1,front=-1,n;
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
            enqueue();
            break;
        case 2:
            dequeue();
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
void enqueue()
{
    int a;
    printf("Enter the data : ");
    scanf("%d",&a);
    if(rear==9)
        printf("overflow!\n");
    else
    {
        if(front==-1&&rear==-1)
            front=rear=0;
        else
            rear++;
        que[rear]=a;
        printf("%d inserted\n",a);
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
        printf("Underflow!\n");
    else
    if(front==rear){
        printf("%d dequeued.\n",que[front]);
        front=rear=-1;}
    else
        printf("%d dequeued.\n",que[front++]);
}
void display()
{
    if(front==-1)
        printf("Queue is Empty!\n");
    else
    {
        printf("The element are : ");
        for(int i=front;i<=rear;i++)
            printf("%d ",que[i]);
        printf("\n");
    }
}