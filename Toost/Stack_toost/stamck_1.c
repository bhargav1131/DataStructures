#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int stack_arr[MAX];
int top = -1;

int isFull(){
    if(top == MAX - 1){
        return 1;
    }
    else
        return 0;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else 
        return 0;
}

void push(int data){
    if(isFull()){
        printf("\nStamck Overmflow");
        return;
    }
    top += 1;
    stack_arr[top] = data;
}


void printData(){
    printf("\n");
    if(isEmpty()){
        printf("\nStamck Underflow");
        return;
    }
    for(int i = top; i>=0; i--){
        printf("%3d", stack_arr[i]);
    }
}


int pop(){
    if(isEmpty()){
        printf("\nEmpty Stack");
        exit(0);
    }
    int store = stack_arr[top];
    top = top - 1;
    return store;
}

int main()
{
    push(0);
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printData();
    int val = pop();
    printf("\n%3d is popped from the stamck", val);
    printData();
    return 0;
}