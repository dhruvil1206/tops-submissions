
#include <stdio.h>

int main()
{
    int a[10];
    int i, j, temp;
    int max, min;
    float sum = 0, mean;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);

        if(scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input! Please enter integers only.\n");
            return 1;
        }

        sum = sum + a[i];
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    mean = sum / 10;

    /* Bubble sort in ascending order */
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nMean = %.2f", mean);

    printf("\nSorted numbers: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    /* Check where the mean lies */
    if(mean < (min + max) / 2.0)
    {
        printf("\nMean is closer to the minimum.\n");
    }
    else if(mean > (min + max) / 2.0)
    {
        printf("\nMean is closer to the maximum.\n");
    }
    else
    {
        printf("\nMean is exactly halfway between minimum and maximum.\n");
    }

    return 0;
}

