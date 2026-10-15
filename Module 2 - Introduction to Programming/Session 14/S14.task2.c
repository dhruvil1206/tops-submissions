#include <stdio.h>

// Function to check whether a number is even
int isEven(int num)
{
    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        return 1;  // Return 1 if the number is even
    }
    else
    {
        return 0;  // Return 0 if the number is odd
    }
}

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function and check the result
    if (isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
}

