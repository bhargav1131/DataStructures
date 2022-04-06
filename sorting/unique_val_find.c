#include <stdio.h>
#include <stdlib.h>

void unique_val(int a[], int b[], int n){
    int i,j;
    int k = 0;
    // int *c = (int *)malloc(n * sizeof(int));
    int c[2*n];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++){
            if(a[i] != b[j]){
                c[k++] = b[j];
            }
        }
    for(k=0; k<n; k++)
        printf("%3d", c[k]);
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
    int a[] = {1, 2, 3, 5, 9};
    int b[] = {2, 5, 4, 0, 8};

    unique_val(a,b,4);
return 0;
}