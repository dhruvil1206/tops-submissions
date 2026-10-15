// Error 1: The variable i is not declared.
// Error 2: The operator =+ is incorrect for adding prices.
// Use += to add each price to the total.
// Error 3: A semicolon is missing after total += prices[i].

#include <stdio.h>

int main()
{
    char *items[] = {"Burger", "Pizza", "Fries"};
    int prices[] = {120, 250, 90};
    int total = 0;
    int i;

    for (i=0; i<3; i++)
    {
        total += prices[i];
    }
    
    printf("Total price is: %d", total);
}

