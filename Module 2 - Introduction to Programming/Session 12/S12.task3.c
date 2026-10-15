#include <stdio.h>

	struct MovieShow
{
    char Movie[50];
    int Screen;

    struct Time
    {
        int hours;
        int minutes;
    } time;
};

void main()
{
    struct MovieShow m = {"Animal", 3, {3, 15}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           m.Movie, m.Screen, m.time.hours, m.time.minutes);
}

