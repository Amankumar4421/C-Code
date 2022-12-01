#include<stdio.h>
void enqueue(int );
int dequeue();
int isEmpty();
int que[100];
int rear=-1,front=-1,n;
int main()
{
    int i=0,node;
    int visited[7] = {0};
    int a [7][7] = {
        {0,1,1,0,0,0,1},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,1,0},
        {0,0,1,0,0,1,1},
        {0,1,0,0,1,0,0}, 
        {0,0,1,0,1,0,0} 
    };
    printf("The BFS Traversal is : ");
    printf("%d ", i);
    visited[i] = 1;
    enqueue(i); // Enqueue i for exploration
    while (isEmpty())
    {
        int node = dequeue();
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j] ==1 && visited[j] == 0){
                printf("%d ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}
void enqueue(int a)
{
    if(rear==9)
        printf("overflow!\n");
    else
    {
        if(front==-1&&rear==-1)
            front=rear=0;
        else
            rear++;
        que[rear]=a;
        //printf("%d inserted\n",a);
    }
}
int dequeue()
{
    if(front==-1&&rear==-1)
        printf("Underflow!\n");
    else
    if(front==rear){
        front=rear=-1;
        return que[front];
        }
    else
        return que[front++];
}
int isEmpty()
{
    if(front==-1&&rear==-1)
        return 0;
    else
        return 1;
}