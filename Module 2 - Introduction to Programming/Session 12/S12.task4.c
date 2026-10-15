#include <stdio.h>

	struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};

void main()
{
    struct InstaProfile p = {"dhruvill12", 300, {"sleeping..", 20}};

    printf("Username: %s\n", p.username);
    printf("Followers: %d\n", p.followers);
    printf("Description: %s\n", p.bio.description);
    printf("Age: %d\n", p.bio.age);
}

