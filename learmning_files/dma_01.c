#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int *ptr = (int*)malloc(50*sizeof(int));
    if (ptr==NULL) {
        printf("\nMemory not available");
        exit(1);
    }
    ptr = (int*) realloc(ptr, 52*sizeof(int));
    for(i=0; i<n; i++){
        printf("\nEnter an integer: ");
        scanf("%d", ptr+i);
    }
    for(i=0; i<n; i++){
        printf("%5d", *(ptr+i));
    }
    free(ptr);
return 0;
}