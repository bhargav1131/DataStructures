#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node * right;
};
struct node *createNode(int data){
    struct node *n = malloc(sizeof(struct node));
    n -> data =  data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

int main()
{
    struct node *p, *p1, *p2;
    p = createNode(1);
    p1 = createNode(2);
    p2 = createNode(3);
    p -> left = p1;
    p -> right = p2;
    
    return 0;
}
