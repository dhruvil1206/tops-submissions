
#include <stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int playlist1 = 50;
    int playlist2 = 60;

    printf("Before Swapping:\n");
    printf("Playlist 1: %d\n", playlist1);
    printf("Playlist 2: %d\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swapping:\n");
    printf("Playlist 1: %d\n", playlist1);
    printf("Playlist 2: %d\n", playlist2);
}

