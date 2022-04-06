#include<stdio.h>
main(){
    int *a, b= 100;
    a = &b;
    printf("%d", a);
    // printf("%d", *a);
}