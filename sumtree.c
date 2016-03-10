
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int sum(struct node *root)
{
   if(root == NULL)
   {
        return 0;
   }
   return (sum(root->left) + root->data + sum(root->right));
}
 
int sumtree(struct node* node)
{
    int leftsub, rightsub;
    if(node == NULL || (node->left == NULL && node->right == NULL))
    {
        return 1;
    }
    leftsub = sum(node->left);
    rightsub = sum(node->right);
    if(node->data == leftsub + rightsub)
    {
        return 1;
    }
    return 0;
}
 
struct node* insert(int data)
{
    struct node* node =(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main()
{
    struct node *root  = insert(26);
    root->left         = insert(10);
    root->right        = insert(3);
    root->left->left   = insert(4);
    root->left->right  = insert(6);
    root->right->right = insert(3);
    if(sumtree(root)==1)
    {
        printf("The given tree is a SumTree ");
    }
    else
    {
        printf("The given tree is not a SumTree ");
    }
    return 0;
}
