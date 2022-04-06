#include <stdio.h>
#include <stdlib.h>
// 06 April, 2022

// defining the structure of a node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// module to create a Binary Tree
struct node *create_BTree()
{
    int val;
    struct node *new = malloc(sizeof(struct node));
    printf("\nEnter the data for the node(simply press -1 for quiting): ");
    scanf("%d", &val);
    if (val == -1)
    {
        return 0;
    }
    new->data = val;
    printf("\nEnter data for the left node:");
    new->left = create_BTree();
    printf("\nEnter data for the right node: ");
    new->right = create_BTree();

    return new;
}

// module for creating a node to be inserted
struct node *createNode(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->right = NULL;
    temp->left = NULL;

    return temp;
}

// module to print data of a tree
void display(struct node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("%d", root->data);
        display(root->right);
    }
}

// module for checking if a Bin_tree is a BS_Tree or not
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

// inserting data in an existing BS_Tree
void insertData(struct node *root, int var)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        if (root->data == var)
        {
            printf("\nCannot insert %d as it is already present in the tree", var);
            exit(1);
        }
        if (var < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(var);
    if (var < prev->data)
    {
        prev->left = new;
        printf("\nSuccessfully inserted the data");
    }
    else
    {
        prev->right = new;
        printf("\nSuccessfully inserted the data");
    }
}

// module for searching an element in a tree
struct node *Search(struct node *root, int key)
{
    if (root != NULL)
    {
        if(root-> data == key){
            return root;
        }
        else if(key < root -> data){
            return Search(root -> left, key);
        }
        else{
            return Search(root -> right, key);
        }
    }
}

// driver module
int main()
{
    struct node *root = NULL;
    root = create_BTree();
    if(isBST(root)){
        printf("\nThe tree is a valid binary search tree.");
    }
    else{
        printf("\nThe tree is an invalid binary search tree.");
        exit(1);
    }
    printf("\nElements of the tree are: \n");
    display(root);
    printf("\n");
    int var;
    printf("\nDo you want to add more data to the tree? Press 1 to continue or any other key to exit");
    scanf("%d", &var);
    if(var == 1){
        int key;
        printf("\nEnter the data you want to insert: \n");
        scanf("%d", &key);
        insertData(root, key);
    }
    else{
        exit(1);
    }
    return 0;
}