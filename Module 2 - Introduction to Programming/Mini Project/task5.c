#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int i, choice, total;
    int highest;
    float average;
    char confirm;
    FILE *fp;

    while(1)
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch(choice)
        {
            case 1:
                fp = fopen("music_log.txt", "w");

                if(fp == NULL)
                {
                    printf("Error opening file!\n");
                    return 1;
                }

                for(i=0;i<7;i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);

                    if(scanf("%d", &minutes[i]) != 1 ||
                       minutes[i] < 0)
                    {
                        printf("Invalid minutes!\n");
                        fclose(fp);
                        return 1;
                    }

                    fprintf(fp, "%d\n", minutes[i]);
                }

                fclose(fp);
                printf("Data saved successfully!\n");
                break;

            case 2:
                fp = fopen("music_log.txt", "r");

                if(fp==NULL)
                {
                    printf("No saved data found!\n");
                    break;
                }

                total = 0;

                for(i=0;i<7;i++)
                {
                    if(fscanf(fp, "%d", &minutes[i]) != 1 ||
                       minutes[i] < 0)
                    {
                        printf("Invalid or incomplete file data!\n");
                        fclose(fp);
                        break;
                    }
                }

                if(i < 7)
                    break;

                fclose(fp);

                highest = minutes[0];

                for(i=0;i<7;i++)
                {
                    total=total + minutes[i];

                    if(minutes[i] > highest)
                        highest = minutes[i];
                }

                average = total/7.0;

                printf("\nTotal = %d minutes\n", total);
                printf("Average = %.2f minutes\n", average);
                printf("Highest = %d minutes\n", highest);
                break;

            case 3:
                printf("Are you sure you want to reset data? (Y/N): ");
                scanf(" %c", &confirm);

                if(confirm =='Y' || confirm =='y')
                {
                    for(i=0;i<7;i++)
                    {
                        minutes[i]=0;
                    }

                    fp=fopen("music_log.txt", "w");

                    if(fp==NULL)
                    {
                        printf("Error resetting file!\n");
                        break;
                    }

                    fclose(fp);

                    printf("Weekly data reset successfully!\n");
                }
                else
                {
                    printf("Reset cancelled. Data is safe.\n");
                }
                break;

            case 4:
                printf("Exiting Music Listening Logger.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

