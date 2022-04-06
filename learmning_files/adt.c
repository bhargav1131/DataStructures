#include<stdio.h>

typedef Node{
    int data,
    Node * next;
}Node:

void Display(Node * head){
    while (head != NULL)
    {   
        print("Element: %d", head->data);
        head = head->next;
    }
}

main(){
    Node * head = ( Node *) malloc (sizeof(Node));
    Node * secound = ( Node *) malloc (sizeof(Node));
    Node * third = ( Node *) malloc (sizeof(Node));

    head->data = 7;
    head->next = secound;

    secound->data = 78;
    secound->next = third;

    third->data = 67;
    third->next = NULL;

    Display(head);

}