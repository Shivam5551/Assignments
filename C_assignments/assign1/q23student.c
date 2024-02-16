/* Q23. Write a program to input the name,marks in three subjects 
    and calculate total marks, percentage and display */
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define NumberOfSubjects 3
#define Students 1

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
    char *student_name[Students];
    char *subjects_name[NumberOfSubjects];
    float marks[Students][NumberOfSubjects];
    float total[Students], percentage[Students];
    int i, j;

    //clrscr();

    for (i = 0; i < Students; i++)
    {
        printf("Enter name of student : ");
        student_name[i] = name();
        for (j = 0; j < NumberOfSubjects; j++)
        {
            printf("Enter %d Subject Name: ", j+1);
            subjects_name[j] = name();
        }
    }

    for (i = 0; i < Students; i++)
    {
        total[i] = 0;
        for (j = 0; j < NumberOfSubjects; j++)
        {
            printf("Enter the marks of %s in %s : ", student_name[i], subjects_name[j]);
            scanf("%f", &marks[i][j]);
            total[i] += marks[i][j];
        }
        percentage[i] = total[i]/NumberOfSubjects;
    }

    for (i = 0; i < Students; i++)
    {
        printf("Student Name : %s\nTotal Marks : %.2f\nPercentage : %.2f\n", student_name[i], total[i], percentage[i]);
    }

    //getch();
    return 0;
}