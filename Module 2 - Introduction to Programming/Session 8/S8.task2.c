#include <stdio.h>

void addToCart(char cart[][50], int *count, char product[])
{
    int i;

    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Shopping Cart:\n");

    for (i=0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][50] = {"Laptop", "Mouse"};
    int count = 2;
    int i;

    addToCart(cart, &count, "Keyboard");

   
}

