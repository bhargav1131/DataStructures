#include <stdio.h>

void print(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%3d", a[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n){
    int key, j;
    for (int i = 1; i <= n-1 ; i++) {
        key = a[i];
        j = i-1;
        while(j>= 0 && a[j]> key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    printf(" \n                                 INSERTION SORTING    ");
    // int arr[] = {1, 4, 3, 7,8, 9, 5};
    int arr[] = {1, 3, 2, 4, 9, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nPrinting array before sorting...");
    print(arr, n);
    printf("\nCalling Insertion sort function...\n");
    insertion_sort(arr, n);
    printf("\nPrinting the array after sorting...");
    print(arr, n);
    return 0;
}