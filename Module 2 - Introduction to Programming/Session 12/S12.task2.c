
#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

void main()
{
    struct FoodItem food[3] = {
        {"Cheese Pizza", 199.0, 4.2},
        {"Burger", 149.0, 4.0},
        {"Veg Biryani", 249.0, 4.5}
    };

    int i;

    for(i=0; i<3; i++)
    {
        printf("\nItem Name: %s\n", food[i].itemName);
        printf("Price: Rs. %.2f\n", food[i].price);
        printf("Rating: %.1f\n", food[i].rating);
    }
}

