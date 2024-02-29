/* Q23. Write a program to input the name,marks in three subjects 
    and calculate total marks, percentage and display */
#include <stdio.h>
//#include <conio.h>

#define size 20

int main()
{
    char student_name[size];
    float marks1, marks2, marks3;
    float total, percentage;
    //clrscr();
    printf("Enter name of student : ");
    scanf("%s", student_name);
    printf("Enter marks of 3 Subjects: ");
    scanf("%f", &marks1);
    scanf("%f", &marks2);
    scanf("%f", &marks2);
    
    total= marks1 + marks2 + marks3;
    percentage = total/3;
    
        printf("Student Name : %s\nTotal Marks : %.2f\nPercentage : %.2f\n", student_name, total, percentage);

    //getch();
    return 0;
}