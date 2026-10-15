#include <stdio.h>

	int avg(int a[])
{
    int i, sum = 0;

    for (i=0; i<7; i++)
    {
        sum=sum+a[i];
    }

    return sum/7;
}

void main()
{
    int i;
    int orders[7] = {200,150,300,250,150,450,350};
    int average;

    average = avg(orders);

    printf("Average Weekly Spend: Rs. %d", average);
}

