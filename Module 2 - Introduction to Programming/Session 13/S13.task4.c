#include <stdio.h>

int main()
{
    FILE *fp;
    int i, found;
    char song[20];
    char temp[20];
   

    fp = fopen("playlist.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
    }

    while (fgets(song, sizeof(song), fp) != NULL)
    {
        strcpy(temp, song);
        found = 0;

        for (i=0; temp[i] != '\0'; i++)
        {
            temp[i] = tolower((unsigned char)temp[i]);
        }

        if (strstr(temp, "love") != NULL)
        {
            printf("%s", song);
        }
    }
    	fclose(fp);
}

