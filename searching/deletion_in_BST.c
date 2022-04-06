#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int data){
    struct node *new = malloc(sizeof(struct node));
    new -> data = data;
    new -> left = NULL;
    new -> right = NULL;

    return new;
}

void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root -> left);
        printf("%3d", root -> data);
        inOrder(root -> right);
    }
}

struct node *search(struct node *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root -> data){
        return root;
    }
    else if(key < root -> data){
        return search(root -> left, key);
    }
    else{
        return search(root -> right, key);
    }
}

void insert(struct node *root, int key){
    struct node *prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root -> data){
            printf("\nCannot insert it into the tree\n");
            return;
        }
        else if(key < root -> data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    struct node *new = createNode(key);
    if(key < prev -> data){
        prev -> left = new;
        printf("\nSuccessfully inserted %d\n", key);
    }
    else{
        prev -> right = new;
        printf("\nSuccessfully inserted %d\n", key);
    }
}

struct node *inOrderPredecessor(struct node *root){
    root = root -> left;
    while(root -> right != NULL){
        root = root -> right;
    }
        return root;
}

struct node *deleteNode(struct node *root, int val){
    struct node *iPre;
    if(root == NULL){
        return NULL;
    }
    if(root -> left== NULL && root -> right == NULL){
        free(root);
        return NULL;
    }

    if(val < root -> data){
        root -> left = deleteNode(root -> left, val);
    }
    else if(val > root -> data){
        root -> right = deleteNode(root -> right, val);
    }
    else{
        iPre = inOrderPredecessor(root);
        root -> data = iPre -> data;
        root -> left = deleteNode(root -> left, val);
    }
    return root;
}

int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    inOrder(p);
    printf("\n");
    insert(p,2);
    inOrder(p);
    deleteNode(p,3);
    printf("\n");
    inOrder(p);

    return 0;
}