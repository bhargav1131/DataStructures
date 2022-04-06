//Code for recursive searching of an element in a Binary Search Tree
//Date: 13th Feb, 2022
#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    struct node *right;
    int data;
};

//function to create a node for a tree
struct node *createNode(int data){
    struct node *n;
    n = malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

//this function returns a pointer to an element which is found after searching the Binary search tree
struct node *search(struct node *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root -> data == key){
        return root;
    }
    else if(key < root -> data){
        return search(root -> left, key);
    }
    else{
         return search(root -> right, key);
    }
}

//function for inOrder traversal of a binary tree
void inOrder(struct node *root){
    if(root != NULL){
        inOrder( root -> left);
        printf("%3d", root -> data);
        inOrder( root -> right);
    }
}


int main()
{
    struct node *a = createNode(15);
    struct node *a1 = createNode(7);
    struct node *a2 = createNode(20);
    struct node *a3 = createNode(2);
    struct node *a4 = createNode(12);
    struct node *a5 = createNode(10);
    struct node *a6 = createNode(14);

    a -> left = a1;
    a -> right = a2;
    a1 -> left = a3;
    a1 -> right = a4;
    a4 -> left = a5;
    a4 -> right = a6;

    int key;
    printf("\nElements of the binary tree are: ");
    inOrder(a);
    printf("\n\n");
    printf("\nPlease enter the element you want to search in the tree: ");
    scanf("%d", &key);
    struct node *ptr = search(a, key);
    if(ptr == NULL){
        printf("%d is not found in the tree", key);
    }
    else{
        printf("%d is present in the tree", ptr -> data);
    }
return 0;
}