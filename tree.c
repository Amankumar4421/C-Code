#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right;
}*root;
struct node * create()
{
    int ch;
    struct node *new;
    new  = (struct node * )malloc(sizeof(sizeof(struct node)));
    printf("press key or -1 : ");
    scanf("%d",&ch);
    if(ch==-1)
        return NULL;
    new->key=ch;
    printf("Enter left node of %d\n",ch);
    new->left=create();
    printf("Enter right node of %d\n",ch);
    new->right=create();
    return new;
}
void preorder(struct node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->key);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->key);
        inorder(temp->right);
    }
}
void postorder(struct node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->key);
    }
}
int main()
{
    printf("Enter Root Node :\n");
    root=create();
    //printf("%d\n",root->key);
    printf("Preorder : ");
    preorder(root);
    printf("\nInorder : ");
    inorder(root);
    printf("\nPostorder : ");
    postorder(root);
    return 0;
}