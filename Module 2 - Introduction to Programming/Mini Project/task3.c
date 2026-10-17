#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int i, choice;
    FILE *fp;

    while(1)
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch(choice)
        {
            case 1:
                for(i=0;i<7;i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);

                    if(scanf("%d", &minutes[i]) != 1 ||
                       minutes[i] < 0)
                    {
                        printf("Invalid minutes entered!\n");
                        return 1;
                    }
                }

                fp = fopen("music_log.txt", "w");

                if(fp==NULL)
                {
                    printf("Error opening file!\n");
                    return 1;
                }

                for(i=0;i<7;i++)
                {
                    fprintf(fp, "%d\n", minutes[i]);
                }

                fclose(fp);

                printf("Data saved to music_log.txt successfully!\n");
                break;

            case 2:
                printf("\nWeekly Listening Data:\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d = %d minutes\n",
                           i+1, minutes[i]);
                }
                break;

            case 3:
                printf("Exiting Music Listening Logger.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

