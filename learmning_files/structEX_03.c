#include<stdio.h>

struct employee
{
    int enumber;
    char ename[21];
    float epay;
    char jdate[15];
}emp[30];

int revise(float temp){
    if (temp<=2000) {
        return temp= temp + (temp*0.15);
    }
    else if (temp<=5000 && temp>2000)
        {
            return temp = (temp + temp*0.10);
        }
    else 
        return temp;
    
}
int main()
{
    int n;
    printf("How many employees? ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
       printf("Enter the id number of the employee: \n");
       scanf("%d", &emp[i].enumber);
       printf("Enter the name of the employee: \n");
       scanf("%s", emp[i].ename);
       printf("Enter the salary of the employee: \n");
       scanf("%f",&emp[i].epay);
       printf("Enter the joining date of the employee: ");
       scanf("%s",emp[i].jdate);
    }
    for (int i = 0; i < n; i++) {
       emp[i].epay= revise(emp[i].epay);
    }
    // loop to print revised salary receipt of the employees
    printf("\n       Employees revised salary");
    printf("\nS No._________Name_________Joining date__________Pay\n");
    // printf("befor4");
    for (int i = 0; i < n; i++) {
        // printf("inFor");
       printf("%3d %3s %3f %3s0", emp[i].enumber,emp[i].ename, emp[i].epay, emp[i].jdate);
    }
return 0;
}