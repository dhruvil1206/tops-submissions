#include <stdio.h>

	void incrementFollowers(int *followers, int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

	void main()
{
    int followers[5] = {400, 700, 1100, 1600, 2100};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Followers:\n");

    for(i=0; i<5; i++)
    {
        printf("%d\n", followers[i]);
    }
}

