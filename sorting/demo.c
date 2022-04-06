#include <stdio.h>
#include <stdlib.h>

void unique_val(int a[], int b[], int n){
    int i=0, j=0, k=0;
    // int *c = (int *)malloc(n * sizeof(int));
    int c[2*n];
    printf("\nThe unique entities are:");

    while(i<n && j<n){
        if(a[i] != b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
    }
    //     else if(b[j] < a[i]){
    //         c[k] = b[j];
    //         k++;
    //         j++;
    //     }
    //     else{
    //         i++;
    //         j++;
    //     }
    // }

    // while(i<n){
    //     c[k] = a[i];
    //     i++;
    //     k++;
    // }
    // while(j<n){
    //     c[k] = b[j];
    //     j++;
    //     k++;
    // }

    for(k=0; k< 2*n; k++)
        printf("%2d", c[k]);

}

int main()
{
    int i, j;
    // printf("\nEnter the 3 elements in list A: ");
    // for(i=0; i<3; i++)
    //     scanf("%d", &a[i]);
    // printf("\nEnter the 3 elements in list B: ");
    // for(j=0; j<3; j++)
    //     scanf("%d", &a[j]);  
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    unique_val(a,b,3);
return 0;
}