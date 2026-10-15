#include <stdio.h>

int main()
{
    int i;

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        // Check if the number is even
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

