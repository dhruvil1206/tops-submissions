#include <stdio.h>

	void main()
{
    int orders[5] = {200, 350, 150, 500, 250};
    int *ptr;
    int i;

    ptr=orders;

    for(i=0; i<5; i++)
    {
        printf("Amount: %d\n", *(ptr + i));
        printf("Address: %p\n", (void *)(ptr + i));
    }
}

