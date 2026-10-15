#include <stdio.h>

void formatFollowersCount(int count)
{
    // Check if the count is 1 million or more
    if (count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    // Check if the count is 1000 or more
    else if (count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    // Print the count as it is if below 1000
    else
    {
        printf("%d", count);
    }
}

int main()
{
    int count;

    // Ask the user to enter the followers count
    printf("Enter followers count: ");
    scanf("%d", &count);

    // Call the function to format the count
    printf("Formatted followers count: ");
    formatFollowersCount(count);

    
}

