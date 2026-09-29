//Build a 'Guess the Song' game like Spotify — the program randomly picks a song name 
//from a list and asks the user to guess it. Use a do-while loop so the user can keep 
//guessing until they get it right.Constraint:Use at least 3 song names of your choice.

#include <stdio.h>
#include <string.h>
void main()
{
    char song[50];
	char guess[50];    
    int choice;

    printf("Choose a song:\n");
    printf("1. iguess\n");
    printf("2. tutor\n");
    printf("3. thatgirl\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        strcpy(song, "iguess");
    else if(choice == 2)
        strcpy(song, "tutor");
    else
        strcpy(song, "thatgirl");

    do
    {
        printf("\nGuess the song: ");
        scanf("%s", guess);

        if(strcmp(guess, song) == 0)
        {
            printf("Correct! You guessed the song!\n");
        }
        else
        {
            printf("Wrong! Try again.\n");
        }

    } while(strcmp(guess, song) != 0);
}
