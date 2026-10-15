
#include <stdio.h>

void main()
{
	 int i, max;
    int cricketScores[3][2] = 
	{
        {160, 165},
        {199, 180},
        {215, 205}
    };

    	for (i=0; i<3; i++)
    {
        max = cricketScores[i][0];

        if (cricketScores[i][1] > max)
        {
            max = cricketScores[i][1];
        }

        printf("Match %d Highest Score: %d\n",i+1,max);
    }
}

