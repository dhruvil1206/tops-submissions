#include <stdio.h>

	void main()
{
    char name[50], username[50];
    int len;

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    len = strlen(name);

    if(len < 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }

    printf("Username: %s", username);
}

