//binary searching
//can be applied only on sorted list
//Date: 17th Feb, 2022
#include <stdio.h>

int bin_search(int a[], int n, int val){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l+r)/2;
        if(val == a[mid]){
            return mid;
        }
        else if(val < a[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int val;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/ sizeof(a[0]);
    printf("\nEnter the value you want to search: ");
    scanf("%d", &val);
    int res = bin_search(a, n, val);
    if(res >=0){
        printf("\nValue found at position %d", res+1);
    }
    else{
        printf("\nValue not found..");
    }
    return 0;
}