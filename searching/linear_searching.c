/*Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.*/
#include <stdio.h>

void linear_search(int a[], int n){
    int data;
    printf("\nEnter the data you want to search !");
    scanf("%d", &data);
    int i;
    for( i=0; i<n; i++){
        if(a[i] == data){
            printf("%d is found at %dth location", data, i+1);
            break;
        }
    }
    if(i==n){
        printf("%d is not present in the list", data);
        printf("\nDo you want to try again? Press 1 if you want to continue..");
        int cont;
        scanf("%d", &cont);
        if(cont == 1)
            linear_search(a, 7);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a)/ sizeof(a[0]);
    linear_search(a, n);
    return 0;
}