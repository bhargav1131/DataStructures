#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void display(struct node *root)
{
    if(root != NULL)
    {
        printf("%2d", root -> data);
        display(root -> left);
        display(root -> right);
    }
}

struct node *create()
{
    int data;
    struct node *newNode = malloc(sizeof(struct node));
    printf("\n Enter data or enter -1 to exit: ");
    scanf("%d", &data);
    if(data == -1)
    {
        return 0;
    }
    newNode -> data = data;
    printf("\nEnter data for the left child of %d", data);
    newNode -> left = create();
    printf("\nEnter data for the right child of %d", data);
    newNode -> right = create();

    return newNode;
}

int main()
{
    struct node *root = NULL;
    root = create();
    printf("\n");
    display(root);
    printf("\n");

    return 0;
}