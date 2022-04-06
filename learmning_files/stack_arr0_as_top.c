//stack implementation using array considering arr[0] as the top element
//14 Dec, 2021
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack_arr[MAX];
int first = -1;

//inserts data into the stack
void push(int data){
    int i;
    first += 1;
    for(i=first; i>0; i--)
        stack_arr[i] = stack_arr[i-1];
    stack_arr[0] = data;
}

//deletes the topmost element of the stack
int pop(){
    int val = stack_arr[0];
    for(int i=0; i<first; i++)
        stack_arr[i] = stack_arr[i+1];
    first -= 1;
    return val;
}

//checks if the stack is empty
int isEmpty(){
    if(first == -1)
        return 1;
    else
        return 0;
}

//checks if the stack is full
int isFull(){
    if(first == MAX-1)
        return 1;
    else
        return 0;
}

//prints the stack element
void print(){
    if(isEmpty()){
        printf("\nStack Underflow\n");
        return;
    }
    for(int i=0; i<=first; i++)
        printf("%3d", stack_arr[i]);
}

//returns the topmost element
int peek(){
    if(isEmpty()){
        printf("\nstack underflow");
        exit(1);
    }
    return stack_arr[0];
}

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
    //     exit(0);
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