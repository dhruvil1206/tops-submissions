#include <stdio.h>

int main()
{
    int minutes[7];
    int i, total = 0, highest;
    float average;
    FILE *fp;

    fp = fopen("music_log.txt", "r");

    if(fp == NULL)
    {
        printf("Error! music_log.txt file not found.\n");
        printf("Please run Task 3 first to save the data.\n");
        return 1;
    }

    for(i=0;i<7;i++)
    {
        if(fscanf(fp, "%d", &minutes[i]) != 1)
        {
            printf("Error! File does not contain 7 valid values.\n");
            fclose(fp);
            return 1;
        }

        if(minutes[i] < 0)
        {
            printf("Error! Invalid listening minutes in file.\n");
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);

    highest=minutes[0];

    for(i=0;i<7;i++)
    {
        total = total+minutes[i];

        if(minutes[i] > highest)
        {
            highest=minutes[i];
        }
    }

    average = total/7.0;

    printf("\n--- Weekly Music Report ---\n");
    printf("Total listening minutes = %d\n", total);
    printf("Average listening minutes = %.2f\n", average);
    printf("Highest listening minutes = %d\n", highest);

}

