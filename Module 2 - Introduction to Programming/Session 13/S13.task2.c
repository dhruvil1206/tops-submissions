#include <stdio.h>

int main()
{
    FILE *f;
    char song[100];

    f=fopen("playlist.txt","r");

    if (f== NULL)
    {
        printf("File not found");
        return 1;
    }

    while (fgets(song, 100, f) != NULL)
    {
        printf("%s", song);
    }

    fclose(f);

}
