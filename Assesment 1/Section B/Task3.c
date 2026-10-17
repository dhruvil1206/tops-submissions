#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    float marks;
    char grade;
};

void assignGrade(struct Student *s)
{
    if (s->marks >= 90)
        s->grade = 'A';
    else if (s->marks >= 75)
        s->grade = 'B';
    else if (s->marks >= 60)
        s->grade = 'C';
    else if (s->marks >= 45)
        s->grade = 'D';
    else
        s->grade = 'F';
}

int main()
{
    struct Student s[3];
    int i, top = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        if (s[i].marks < 0 || s[i].marks > 100)
        {
            printf("Invalid marks! Enter marks between 0 and 100.\n");
        }

        assignGrade(&s[i]);

        if (s[i].marks > s[top].marks)
        {
            top=i;
        }
    }

    printf("\n%-20s %-10s %-10s %-10s\n",
           "Name", "Roll No", "Marks", "Grade");

    printf("--------------------------------------------------\n");

    for (i=0;i<3;i++)
    {
        printf("%-20s %-10d %-10.2f %-10c\n",
               s[i].name, s[i].rollno,
               s[i].marks, s[i].grade);
    }

    printf("\nTop Performer: %s\n", s[top].name);
    printf("Marks: %.2f\n", s[top].marks);
    printf("Grade: %c\n", s[top].grade);

}

