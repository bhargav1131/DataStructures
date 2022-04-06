#include<stdio.h>
#include<string.h>

// void p_routine(char code[23]){
//     int i;
//     int len= strlen(code);
    
//     for (int i = 0; i < len; i++) {
//         if (code[i]== ',') {
//         printf("%c", code[i-1]);
//         }
//     }
// }


void p_routine(char code[23]){
    char * ptr;
    ptr = strtok (code," ,.-");
    printf("\n");
    while (ptr != NULL)
    {
        printf("%s", ptr);
        ptr = strtok(NULL, ",.-");
    }
}
int main()
{   
    char str[28]= "-Hello,Hi-bye";
     p_routine(str);   
     return 0;
}
