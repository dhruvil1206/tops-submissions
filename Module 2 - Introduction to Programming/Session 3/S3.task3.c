// Write a program that stores your favorite Spotify playlist's name (string), 
// total number of songs (int), and average song duration in minutes (float). 
// Print all values in a single formatted sentence.

#include<stdio.h>
	void main()
{
	char playlistname[]="My bangerss";
	int totalsongs=7;
	float avgduration=8.5;
	
	printf("My playlist '%s' has %d songs with an avg duration of %.1f minutes..",
	playlistname,totalsongs,avgduration); 
}
