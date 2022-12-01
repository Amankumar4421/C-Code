#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* getnew(int data)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->left=new->right=NULL;
    return new;
}
struct node* insert(struct node *root,int data)
{
    if(root==NULL)
        root=getnew(data);
    else
    if(data<=root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
}
void preorder(struct node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}
void postorder(struct node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
}
/*
void search(struct node *temp,int a)
{
    if(temp==NULL)
        printf("Element Not found ");
    else
    if(temp->data==a)
        printf("Element Found ");
    else
    if(temp->data<=a)
        search(temp->left,a);
    else
        search(temp->right,a);
}*/
int main()
{
    int ch=1,a,d=1;
    struct node *root=NULL;
    while(ch!=6)
    {
        printf("\n1.create\n2.search\n3.preorder\n4.inorder\n5.postorder\n6.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            while(d!=0){
                printf("Enter data :");
                scanf("%d",&a);
                root=insert(root,a);
                printf("1 for next or 0 : ");
                scanf("%d",&d);
            }
                break;
            case 2:
                // printf("Enter element to be search : ");
                // scanf("%d",&a);
                // search(root,a);
                break;
            case 3:
                preorder(root);
                break;
            case 4:
                inorder(root);
                break;
            case 5:
                postorder(root);
                break;
            case 6:
                break;
            default : 
            printf("Enter correct input!\n");
        }
    }
    return 0;
}