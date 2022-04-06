// stack implementation using linked list
//14 Dec, 2021
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
} *top = NULL;

//_____________________________________________
//inserts the data into the stack
void push(int data){
    struct node *newNode = malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("\nStack overflow.");
        exit(1);
    }
    newNode -> data = data;
    newNode -> link = NULL;
    newNode -> link = top;
    top = newNode;
}

//______________________________________________
//deletes the topmost data in te stack
int pop(){
    struct node *temp = top;
    int val = top -> data;
    top = top -> link;
    free(temp);
    temp  = NULL;
    return val;
}

//_______________________________________________
//checks if the stack is empty
int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

//_______________________________________________ 
//displays the topmost element
int peek(){
    if(isEmpty()){
        printf("\nStack underflow");
        exit(1);
    }
    return top -> data;
}

//________________________________________________
//prints the entire stack
void print(){
    struct node *print = top;
    printf("\nThe stack elements are: \n");
    while(print != NULL){
        printf("%3d", print -> data);
        print = print -> link;
    }
}
//________________________________________________

int main(){
    int choice, data;
    printf("\n\n\n                                 ARRAY IMPLEMENTATION OF STACK\n");
    printf("                            __________________________________________\n");
    while(1){
    printf("                  LIST OF OPERATIONS THAT CAN BE PERFORMED ON A STACK\n");
    printf("\n                  1. Push --> insert an element into the stack \n");
    printf("                  2. Pop  --> deletes an element from the top of the stack\n");
    printf("                  3. Print the top element\n");
    printf("                  4. Print all the elements of the stack\n");
    printf("                  5. Quit\n");
    printf("                            ---------------------------------------\n\n");
    printf("\nPlease enter your choice: __/\\_ ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("\n\nEnter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            printf("\n%d is inserted\n", data);
            break;
        case 2: 
            data = pop();
            printf("\n\nThe deleted element is %d\n", data);
            break;
        case 3:
            printf("\n\nThe topmost element of the atck is: %d\n\n", peek());
            break;
        case 4: 
            printf("\n");
            print();
            printf("\n");
            break;
        case 5: 
            exit(1);
            break;
        default: printf("\nInvalid input");
    }
    }
return 0;
}