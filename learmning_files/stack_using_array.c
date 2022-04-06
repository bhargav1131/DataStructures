#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

// ---------------------------------------------
//checks if the stack is empty
int isEmpty(){
    if(top == -1)
        return 1;
    else 
        return 0;
}

// -------------------------------------------
//checks if the stack is Full
int isFull(){
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

// -------------------------------------------
//inserts data into the stack
void push(int data){
    if(isFull()){
        printf("\nStamck overflow");
    return;
    }
    top += 1;
    stack_arr[top] = data;
}

// -------------------------------------------
//deletes the topmost element of the stack
int pop(){
    int value;
    if(isEmpty()){
        printf("\nStamck Underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

// -------------------------------------------
//prints the whole stack
void print(){
    if(isEmpty()){
        printf("\nThe stamck is empty. Please insert data\n");
    }
    printf("\nThe stack elements are: ");
    for(int i = top; i >= 0; i--)
        printf("%3d", stack_arr[i]);
    printf("\n");
}

// -------------------------------------------
//prints the topmost element
int peek(){
    if(isEmpty()){
        printf("\nStack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

// -------------------------------------------
int main(){
    int choice, data;
    printf("\n\n\n                                 ARRAY IMPLEMENTATION OF STACK\n");
    printf("                            ---------------------------------------\n");
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
    // if(scanf("%d", &choice) != 1){
    //     exit(1);
    // }
    
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
            break;
        case 5: 
            exit(1);
            break;
        default: printf("\nInvalid input");
    }
    }
return 0;
}