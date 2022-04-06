//Function for Iterative searching of an element in a Binary search tree
//Date : 14th Feb, 2022
#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    struct node *right;
    int data;
};

//function to create a node for a tree
struct node * createNode(int data){
    struct node *n = malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

//this function returns a pointer to an element which is found after searching the Binary search tree
struct node *searchIter(struct node *root, int key){
    while(root != NULL){
        if( key == root -> data){
            return root;
        }
        else if(key < root -> data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
}

//function for inOrder traversal of a binary tree
void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root -> left);
        printf("%3d", root -> data);
        inOrder(root -> right);
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

    a1 -> left = a2;
    a1 -> right = a3;
    a3 -> left = b1;
    a3 -> right = b2;
    b1 -> right = c1;

    inOrder(a1);
    printf("\nEnter the key element you want to search : \n");
    scanf("%d", &key);
    struct node *ptr = searchIter(a1, key);
    if(ptr == NULL){
        printf("\n%d not found", key);
    }
    else{
        printf("\n%d found", key);
    }
    return 0;
}