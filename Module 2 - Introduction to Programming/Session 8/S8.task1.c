#include <stdio.h>

char getUserInitials(char name[])
{
    char initials[10];
    int i,j=0;

    for(i=0;name[i] != '\0';i++)
    {
        if(i==0 ||name[i-1]==' ')
        {
            initials[j]=toupper(name[i]);
            j++;
        }
    }

    initials[j] = '\0';
    printf("%s", initials);
}

int main()
{
    char name[] = "Virat Kohli";

    getUserInitials(name);
}
