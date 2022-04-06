#include<stdio.h> 
#include<ctype.h> 

int* Bubble_Sort(int a[],int n) //array a[] points to arr.   
{  
    int i, j,temp;     
    for(i = 0; i<n-1; i++)    
    {    
        for(j = i+1; j<n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    return a;
}

int main ()    
{    
     
    int arr[10], n, i;
    printf("How many elements do you want to insert? ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++){
         scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    printf("%d", scanf("%d", &arr[i]));

    // int res =  scanf("%d", &arr[i]);
    // printf("res = %d",res);
    int *p = Bubble_Sort(arr,n);  
       
    if(scanf("%d", &arr[i])==n){
        printf("\nPrinting sorted elements ...\n"); 
        for(i=0;i<n;i++)  
        {  
             printf("%3d",*(p+i));  
        }  
    }
    else
        printf("\nplease enter valid input");
    
return 0;
}    
