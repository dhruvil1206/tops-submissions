#include <stdio.h>
#include <string.h>

int main()
{
    char meal[20];
    int choice;

    printf("Enter meal time: ");
    scanf("%s", meal);

    if(strcmp(meal, "breakfast") == 0)
        choice = 1;
    else if(strcmp(meal, "lunch") == 0)
        choice = 2;
    else if(strcmp(meal, "dinner") == 0)
        choice = 3;
    else if(strcmp(meal, "snack") == 0)
        choice = 4;
    else
        choice = 5;

    switch(choice)
    {
        case 1:
            printf("Suggested dish: Masala Dosa");
            break;

        case 2:
            printf("Suggested dish: Paneer Thali");
            break;

        case 3:
            printf("Suggested dish: Butter Paneer");
            break;

        case 4:
            printf("Suggested dish: Samosa");
            break;

        default:
            printf("Try some fruits!");
    }

    return 0;
}
