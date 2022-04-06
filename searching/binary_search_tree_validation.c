//checking if a Binary tree is a binary search tree
//Date : 13th Feb, 2022
#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    struct node *right;
    int data;
};

struct node *createNode(int data){
    struct node *n;
    n = malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

void inOrder(struct node *root){
    if(root != NULL){
        inOrder( root -> left);
        printf("%3d", root -> data);
        inOrder( root -> right);
    }
}

int isBST(struct node *root){
    static struct node *prev = NULL;
    if(root != NULL){
        if( !isBST(root -> left)){
            return 0;
        }
        if( prev != NULL && root -> data <= prev -> data){
            return 0;
        }
        prev= root;
        return isBST(root -> right);
    }
    else{
        return 1;
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

    inOrder(a);
    printf("\n");
    if(isBST(a)){
        printf("\n Yes ! This a binary search tree");
    }
    else{
        printf("\nThis is not a binary serach tree as the inorder traversal of the tree doesn't give data in ascending order..");
    }
    return 0;
}