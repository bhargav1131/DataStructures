#include <stdio.h>
#include <string.h>

int main(void) {
    char order[5],c;
    char asc[5] = {'a'}, desc[5] = {'d'};
    printf("What will be the order of the sorted output?\n(provide \"a\" for ascending or \"d\" for descending)\nAns: ");
    scanf("%[^\n]s",order);
    if(strcmp(order, asc) == 0 || strcmp(order, desc) == 0)
        printf("You've inputed %s.\n", order);
    else
        printf("Please provide a valid answer.\n");
    
return 0;
}