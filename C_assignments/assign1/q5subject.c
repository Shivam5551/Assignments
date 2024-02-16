/* Q5. Write a program to enter student’s rolls number, 3 subject paper 
 Marks. Calculate the total marks and average.
*/
#include <stdio.h>
//#include <conio.h>

int main()
{
    float marks1, marks2, marks3;
    int rollNo = 0;
    float total = 0, average = 0;

    //clrscr();
    printf("Enter Students roll no. : ");
    scanf("%d", &rollNo);
    
    printf("Marks of Subject1: ");
    scanf("%f", &marks1);
    printf("Marks of Subject2: ");
    scanf("%f", &marks2);
    printf("Marks of Subject3: ");
    scanf("%f", &marks3);
    total = marks1 + marks2 + marks3;
    
    average = (total/3); 
    printf("Total : %.2f\tAverage : %.2f\n", total, average);

    //getch();
    return 0;
}