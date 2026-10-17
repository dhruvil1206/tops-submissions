#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void weeklyReport(struct StudyLog s[], int n)
{
    int i, j, k;
    float total, avg;

    printf("\n--- Weekly Study Report ---\n");

    for (i=0; i<n; i++)
    {
        total=0;

        for (j=0; j<7; j++)
        {
            total=total + s[i].hours[j];
        }

        avg = total/7;

        printf("\nSubject: %s\n", s[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", avg);

        printf("Progress Chart:\n");

        for (j=0; j<7; j++)
        {
            printf("Day %d: ", j+1);

            for (k=0; k<(int)s[i].hours[j]; k++)
            {
                printf("\u2022 ");
            }

            printf("\n");
        }
    }
}

int main()
{
    struct StudyLog s[3];
    int i, j, day, choice;
    float h;
    FILE *fp;

    for (i=0; i<3; i++)
    {
        printf("Enter subject %d name: ", i + 1);
        scanf(" %39[^\n]", s[i].subject);

        for (j=0; j<7; j++)
        {
            s[i].hours[j] = 0;
        }
    }

    do
    {
        printf("\n--- Student Productivity Tracker ---\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter day number (1-7): ");
                scanf("%d", &day);

                if (day<1 || day>7)
                {
                    printf("Invalid day number!\n");
                    break;
                }

                for (i=0; i<3; i++)
                {
                    printf("Enter hours for %s: ",
                           s[i].subject);
                    scanf("%f", &h);

                    while (h<0 || h>24)
                    {
                        printf("Enter hours between 0 and 24: ");
                        scanf("%f", &h);
                    }

                    s[i].hours[day-1] = h;
                }

                printf("Study hours logged successfully!\n");
                break;

            case 2:
                weeklyReport(s, 3);
                break;

            case 3:
                fp = fopen("productivity_log.txt", "w");

                if (fp==NULL)
                {
                    printf("Error opening file!\n");
                }
                else
                {
                    for (i=0; i<3; i++)
                    {
                        fprintf(fp, "%s", s[i].subject);

                        for (j=0; j<7; j++)
                        {
                            fprintf(fp, ",%.2f",
                                    s[i].hours[j]);
                        }

                        fprintf(fp, "\n");
                    }

                    fclose(fp);

                    printf("Records saved successfully!\n");
                    printf("File: productivity_log.txt\n");
                }
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);


}

