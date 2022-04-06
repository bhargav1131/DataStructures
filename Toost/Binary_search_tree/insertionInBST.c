#include <stdio.h>
#include <stdlib.h>

// defining the structure of a node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// print the data of the tree
void display(struct node *root)
{
    if (root != NULL)
    {
        printf("%2d ", root->data);
        display(root->left);
        display(root->right);
    }
}

// to create a binary tree
struct node *createTree()
{
    int val;
    struct node *temp = malloc(sizeof(struct node));
    printf("\nEnter data[press -1 for stopping]");
    scanf("%d", &val);
    if (val == -1)
    {
        return 0;
    }
    temp->data = val;
    printf("\nEnter data for the left child of %d", val);
    temp->left = createTree();
    printf("\nEnter data for the right child of %d", val);
    temp->right = createTree();

    return temp;
}

// to check if a binary tree is binary search tree of not
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
    return 1;
}

//creating node for an element
struct node *createNode(int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> left = NULL;
    ptr -> right = NULL;

    return ptr;
}

// to insert an element in a binary search tree
void insertNode(struct node *root, int key){
    struct node *prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root -> data){
            printf("\n%d is already present in the tree", key);
            return;
        }
        else if(key < root -> data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    struct node *n = createNode(key);
    if(key < prev -> data){
        prev -> left = n;
        printf("\n%d added successfully in the tree", key);
    }
    else{
        prev -> right = n;
        printf("%d successfully added in the tree", key);
    }
}

int main()
{
    struct node *root = NULL;
    root = createTree();
    printf("\nThe elements of the tree are:\n");
    display(root);

    int key;
    printf("\nEnter the key element you want to insert in the tree: ");
    scanf("%d", &key);
    if(isBST(root)){
        insertNode(root, key);
    }
    else{
        exit(1);
    }
    printf("\nThe elements of the tree are:\n");
    display(root);
    return 0;
}