#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int* swap(int a[],int n){
    int i,j, temp;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    return a;
    // for(i=0; i<n; i++)
    //     printf("%3d", a[i]);

}


int main()
{

    int n,arr[10];
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        // printf("ok1");
         int *ptr = swap(arr,n);
           for(int i=0; i<n; i++){
               printf("%3d", *(ptr+i));}
        // if(scanf("%d", &arr[i])==1)
        // {
        //    int *ptr = swap(arr,n);
        //    for(int i=0; i<n; i++){
        //        printf("%3d", *(ptr+i));
        //    }  
            
        // }
        // else
        //     printf("\nplease enter valid input.");
    } 
return 0;
}