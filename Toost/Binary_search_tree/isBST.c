#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int val;
    struct node *new = malloc(sizeof(struct node));
    printf("\nEnter data or press -1 to exit.");
    scanf("%d", &val);
    if (val == -1)
    {
        return 0;
    }
    new->data = val;
    printf("\nEnter data for the left child of %d", val);
    new->left = create();
    printf("\nEnter data for the right child of %d", val);
    new->right = create();

    return new;
}

void display(struct node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("%2d", root->data);
        display(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    struct node *root = NULL;
    root = create();
    printf("\n");

    int res = isBST(root);
    if (res == 1)
    {
        display(root);
        printf(" is a binary search tree\n");
    }
    else
    {
        display(root);
        printf(" is not a binary search tree\n");
    }
    return 0;
}