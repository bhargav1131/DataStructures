#include <stdio.h>
// Date: 28th Jan, 2022

void print(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%3d", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int n){
    int temp;
    for(int i=0; i<n-1; i++) //for number of passes
        for(int j=0; j<n-1-i; j++){
            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
}

void bubble_sort_adaptive(int a[], int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++)//for number of passes
    {
        printf("\nThe Algorithm is on Pass number %d", i+1);
        isSorted = 1;
        for(int j=0; j<n-1-i; j++){
            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
            if(isSorted){
                return;
            }
    }
}

int main()
{
    printf(" \n                                  BUBBLE SORTING    ");
    // int arr[] = {1, 4, 3, 7,8, 9, 5};
    int arr[] = {1, 2, 3, 4, 9, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nPrinting array before sorting...");
    print(arr, n);
    printf("\nCalling bubblesort function...\n");
    bubble_sort_adaptive(arr, n);
    printf("\nPrinting the array after sorting...");
    print(arr, n);
    return 0;
}