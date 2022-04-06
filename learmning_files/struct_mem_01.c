//structure member as argument
#include<stdio.h>
struct student{
    char name[12];
    int age;
    int roll_no;
    float marks;    
};
void print(char name[], int age, int roll_no, float marks){
    printf("%s %d %d %0.2f", name, age, roll_no, marks);
}
int main()
{
    struct student s1= {"NICK", 21, 07, 87};
    print(s1.name,s1.age, s1.roll_no, s1.marks);
return 0;
}