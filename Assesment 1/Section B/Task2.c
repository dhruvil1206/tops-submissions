#include <stdio.h>

int main()
{
    float hours[7], total = 0, avg;
    int i, max = 0, j;

    for (i=0;i<7;i++)
    {
        printf("Enter study hours for Day %d: ", i+1);
        scanf("%f", &hours[i]);

        while (hours[i] < 0 || hours[i] > 24)
        {
            printf("Invalid hours! Enter between 0 and 24: ");
            scanf("%f", &hours[i]);
        }

        total = total+hours[i];

        if (hours[i] > hours[max])
        {
            max=i;
        }
    }

    avg = total / 7;

    printf("\nWeekly Total = %.2f hours", total);
    printf("\nDaily Average = %.2f hours", avg);
    printf("\nHighest Study Hours: Day %d (%.2f hours)", max+1, hours[max]);

    printf("\n\nStudy Hours Chart:\n");

    for (i=0;i<7;i++)
    {
        printf("Day %d: ", i+1);

        for (j=0; j<(int)hours[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}

