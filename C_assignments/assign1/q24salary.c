/* Q24. Write a program to input the name,basic salary and calculate DA,HRA,IT, and PF 
DA=25% OF BS , HRA= 10% OF BS, PF=5% OF BS AND IT =10% OF BS.
Calculate the Net Salary = ( BS+DA+HRA)-(IT+PF) */

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

char *name()
{
    int length = 0;
    char ch;
    char *name = NULL;

    while ((ch = getchar()) != '\n') 
    {
        name = (char *)realloc(name, (length + 1) * sizeof(char));
        if (name == NULL) 
        {
            printf("Memory allocation failed. Exiting.\n");
            return NULL;
        }
        name[length++] = ch;
    }
    name[length] = '\0';

    return name;
}

int main()
{
    char *person_name = NULL;
    float BS, HRA, DA, IT, PF,Net_salary;
    //clrscr();
    printf("Enter name of person : ");
    person_name = name();
    printf("Enter your Base Salary : ");
    scanf("%f", &BS);

    DA = 0.25*BS, HRA = 0.10*BS, PF = 0.05*BS, IT = 0.10*BS;
    Net_salary = (BS+DA+HRA)-(IT+PF);
    
    printf("Net Salary of %s : %.2f\n", person_name, Net_salary);

    //getch();
    return 0;
}

