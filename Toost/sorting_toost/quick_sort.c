#include <stdio.h>

void print(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%3d", a[i]);
    }
}

int partition(int a[], int low, int high){
    int temp, pivot = a[low];
    int i = low+1;
    int j = high;

    do{
        while(a[i]<=pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } 
    }while(i<j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quick_sort(int a[], int low, int high){
    int partitionIndex;

    if(low < high){
        partitionIndex = partition(a, low, high);
            quick_sort(a, low, partitionIndex-1);
            quick_sort(a, partitionIndex+1, high);
        }
}

int main()
{
    printf(" \n                                  QUICK  SORTING    ");
    int arr[] = {2, 3, 1, 4, 9, 8, 11, 7, 17, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n-> Printing array before sorting...");
    print(arr, n);
    printf("\n-> Calling quick sort function...\n");
    quick_sort(arr, 0, n-1);
    printf("\n-> Printing the array after sorting...\n");
    print(arr, n);

    return 0;
}