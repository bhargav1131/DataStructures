#include<stdio.h>
// example 2 of structure chapter
struct student
{
    int roll_no;
    char name[21];
    int tot_marks;
};
main()
{
    struct student s[15];
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    for (int i = 0; i <n ; i++) {
        printf("Please enter the roll no. of the student: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter the name of the student: \n");
        scanf("%s",s[i].name);
        printf("Enter the total marks of the student: \n");
        scanf("%d", &s[i].tot_marks);
    }
    
    int ser;
    printf("Enter the roll no. for fetching the data of the student you want: ");
    scanf("%d", &ser);
    for (int i = 0; i <n ; i++) {
       if (s[i].roll_no==ser) {
          printf("Name= %s", s[i].name);
          printf("Total marks=%d", s[i].tot_marks);
       }
    }
}