#include <stdio.h>

	void formatPrice(int price)
{
    printf("RS. %d\n", price);
}

	int main()
{
    printf("Mobile Price: ");
    formatPrice(60000);

    printf("Headphones Price: ");
    formatPrice(1400);

    printf("Keyboard Price: ");
    formatPrice(3600);

    return 0;
}

