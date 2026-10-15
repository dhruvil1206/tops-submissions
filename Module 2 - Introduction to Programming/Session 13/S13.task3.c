#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    if (fp == NULL)
    {
        printf("File not opened");
        return 1;
    }

    fprintf(fp, "\nKesariya");
    fprintf(fp, "\nApna Bana Le");

    fclose(fp);

    printf("Songs added successfully!");

}

