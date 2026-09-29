//Create a simple IPL Fan Bot that takes your favorite IPL team name asinput and uses if-else-if
//statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 
//'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

#include<stdio.h>
#include<string.h>
	void main()
{
	char team[50];
	printf("Enter your favorite team : ");
	scanf ("%s",team);
	
	if (strcmp(team,"MI")==0){
		printf("Go Mumbai Indians!");
	}
	else if (strcmp(team,"RCB")==0){
		printf("Ee Sala Cup Namde!");
	}
	else if (strcmp(team,"CSK")==0){
		printf("Whistle Podu!");
	}
	else if (strcmp(team,"GT")==0){
		printf("Aava De!");
	}
	else {
		printf("Team not found !");
	}
}



