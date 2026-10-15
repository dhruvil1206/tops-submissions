#include <stdio.h>

	void main()
{
    char user1[50], user2[50];

    printf("\nEnter first username: ");
    scanf("%s", user1);

    printf("\nEnter second username: ");
    scanf("%s", user2);

    if(strcmp(user1, user2) == 0)
    {
        printf("\nBoth usernames are same");
    }
    else
    {
        printf("\nBoth usernames are different");
    }
}

