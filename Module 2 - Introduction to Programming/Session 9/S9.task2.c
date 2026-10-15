#include <stdio.h>

	void main()
{
    int i;
    int playlistRatings[3][5] = 
	{
        {4, 5, 3, 4, 5},
        {5, 4, 5, 3, 4},
		{3, 4, 4, 5, 5}
   						  };

    printf("Second Playlist Ratings:\n");

    for (i=0; i<5; i++)
    {
        printf("%d\n", playlistRatings[1][i]);
    }
}

