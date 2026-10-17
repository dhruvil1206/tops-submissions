#include <stdio.h>

int main()
{
    float per;

    printf("Enter percentage: ");
    scanf("%f", &per);

    if (per<0 || per>100)
    {
        printf("Invalid percentage! Enter a value between 0 and 100.");
        return 0;
    }
    else if (per >= 90)
    {
        printf("Grade A - Excellent! Keep it up.");
    }
    else if (per >= 75)
    {
        printf("Grade B - Good work! Keep pushing.");
    }
    else if (per >= 60)
    {
        printf("Grade C - Good effort! Keep improving.");
    }
    else if (per >= 45)
    {
        printf("Grade D - Keep practicing!");
    }
    else
    {
        printf("Grade F - Don't give up! Try again.");
    }

}

