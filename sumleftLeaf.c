
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node* left, *right;
}*root;

void insert(struct node ** tree, int val)
{
    struct node *temp = NULL;
    if( *tree == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
       
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

bool leaf(struct node *Node)
{
   if (Node == NULL)
       return false;
   if (Node->left == NULL && Node->right == NULL)
       return true;
   return false;
}

int leftleavesSum(struct node *root)
{
    int res = 0;
    if (root != NULL)
    {
       if (leaf(root->left))
       {
            res = res + root->left->data;
       }
       else
       {
            res = res + leftleavesSum(root->left);
       }
 
       res =res + leftleavesSum(root->right);
    }
    return res;
}

int main(void) {
	root = NULL;
    insert(&root, 8);
    insert(&root, 3);
    insert(&root, 14);
    insert(&root, 5);
    insert(&root, 11);
    insert(&root, 16);
    insert(&root, 2);
    //insert(&root, 1);
    printf("%d",leftleavesSum(root));
	return 0;
}
