#include <stdio.h>

int main()
{
    FILE *f;

    f = fopen("playlist.txt", "w");

    fprintf(f, "Perfect\n");
    fprintf(f, "Love Story\n");
    fprintf(f, "Shape of You\n");

    fclose(f);

    printf("Songs written successfully");

}


