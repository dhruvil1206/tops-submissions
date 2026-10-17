#include <stdio.h>

int main()
{
    int minutes[7];
    int i;

    printf("Music Listening Logger\n");

    for(i=0;i<7;i++)
    {
        printf("Enter listening minutes for day %d: ", i+1);
        scanf("%d", &minutes[i]);
    }

    printf("\nWeekly Music Listening Data:\n");

    for(i=0;i<7;i++)
    {
        printf("Day %d = %d minutes\n", i+1, minutes[i]);
    }
}

