#include<stdio.h>
//example 01 of structure chapter
struct students
{
    int roll_no;
    char name[21];
    int tmarks;
};
main()
{
    struct students baazi;
    printf("Please enter the roll no. of the student: ");
    scanf("%d", &baazi.roll_no);
    printf("Enter the name of the student: \n");
    scanf("%s",baazi.name);
    printf("Enter the total marks of the student: \n");
    scanf("%d", &baazi.tmarks);

    printf("roll no. of the student is %d\n", baazi.roll_no);
    printf("Name of the students is %s\n", baazi.name);
    printf("Total marks ofthe student is %d", baazi.tmarks);

}