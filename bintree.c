
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}*root;

void insert(struct Node **head, int data)
{
    struct Node *temp = NULL;
    
    if((*head)==NULL)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        *head=temp;
    }
   // printf("%d",(*head)->data);
    if(data<((*head)->data) )
    {
        insert(&(*head)->left,data);
    }
    
    else if(data>((*head)->data))
    {
        insert(&(*head)->right,data);
    }

}

void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if(root)
    {
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
    }
    
}


int main()
{
    root= NULL;
    insert(&root,9);
    insert(&root,7);
    insert(&root,12);
    insert(&root,6);
    insert(&root,8);
    insert(&root,11);
    insert(&root,13);
    inorder(root);
    printf("\n");
    postorder(root);
    return 0;
}
