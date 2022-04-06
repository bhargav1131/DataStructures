#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int stack_arr[MAX];
int top = -1;

void push(int data){
    if(isFull()){
        printf("\nNo Space");
        exit(0);
    }
    int i;
    top = top + 1;
    for(i=top; i>0; i--){
        stack_arr[i] = stack_arr[i-1];
    }
    stack_arr[0] = data;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else
        return 0;
}

int isFull(){
    if(top == MAX-1){
        return 1;
    }
    else
        return 0;
}

void pop(){
    if(isEmpty()){
        printf("\nStamck is empty");
        exit(1);
    }
    printf("%d", stack_arr[0]);
    for(int i=0; i<top; i++){
        stack_arr[i] = stack_arr[i+1];
    }
    top = top - 1;
}

void printData(){
    if(isEmpty()){
        printf("\nEmpty stamck");
        exit(0);
    }
    printf("\n");
    for(int i=0; i<=top; i++){
        printf("%3d",stack_arr[i]);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    
    printData();
    pop();
    printData();

    return 0;
}