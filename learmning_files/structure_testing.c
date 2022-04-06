#include<stdio.h>
struct MyStruct
{
    int age;
    char name[21];
    char address[23];
}vimdhayak, dogelina;
int main()
{
    printf("Enter the damta into the structure: ");
    printf("Enter the age:");
    scanf("%d", &vimdhayak.age);
    printf("Enter the name:");
    scanf("%s", vimdhayak.name);
    printf("Enter the address: ");
    scanf("%s", vimdhayak.address);

    printf("%d\n", vimdhayak.age);
    printf("%s\n", vimdhayak.name);
    printf("%s", vimdhayak.address);

return 0;
}