#include <stdio.h>

int main()
{
    int a[10], i, j, temp, max, min;
    int sum = 0;
    float mean;

    // Accept 10 integers
    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input! Please enter integers only.\n");
            return 1;
        }
    }

    // Find maximum and minimum
    max = a[0];
    min = a[0];

    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];

        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    // Calculate arithmetic mean
    mean = sum / 10.0;

    // Sort numbers using bubble sort
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display results
    printf("\nMinimum = %d", min);
    printf("\nMaximum = %d", max);
    printf("\nMean = %.2f", mean);

    printf("\nSorted numbers: ");

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);

    // Compare mean's distance from minimum and maximum
    if (mean - min < max - mean)
        printf("\nMean is closer to the minimum.\n");
    else if (mean - min > max - mean)
        printf("\nMean is closer to the maximum.\n");
    else
        printf("\nMean is exactly halfway between minimum and maximum.\n");

    return 0;
}

