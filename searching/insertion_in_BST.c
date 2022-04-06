// Function for inserting an element in a Binary search tree
// Date : 14th Feb, 2022
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

// function to create a node for a tree
struct node *createNode(int data)
{
    struct node *n = malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// function for inOrder traversal of a binary tree
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%3d", root->data);
        inOrder(root->right);
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("\n%d cannot be inserted in the tree as it's already present", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *add = createNode(34);
    if (key < prev->data)
    {
        prev->left = add;
        printf("\n%d succesfully inserted in the tree", key);
    }
    else
    {
        printf("\n%d succesfully inserted in the tree", key);
        prev->right = add;
    }
}

int main()
{
    int key;
    struct node *a1 = createNode(3);
    struct node *a2 = createNode(1);
    struct node *a3 = createNode(9);
    struct node *b1 = createNode(4);
    struct node *b2 = createNode(11);
    struct node *c1 = createNode(7);

    a1->left = a2;
    a1->right = a3;
    a3->left = b1;
    a3->right = b2;
    b1->right = c1;

    inOrder(a1);
    printf("\nEnter the key element you want to insert : \n");
    scanf("%d", &key);
    insert(a1, key);

    return 0;
}