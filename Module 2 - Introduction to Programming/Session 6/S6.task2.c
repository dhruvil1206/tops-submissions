//Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team,
// 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.
#include<stdio.h>
	void main()
{
	int ch;
	char newteam[30];
	while (1)
	{
		printf("\n ----IPL MENU----");
		printf("\n1. View your favorite 3 IPL teams");
		printf("\n2. Add a new team");
		printf("\n3. Exit");
		
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("Favorite IPL team..");
			printf("\nRCB");	
			printf("\nMI");
			printf("\nGT");
			
			if(newteam[0] != '\0')
            {
                printf("\n%s",newteam);
            }
		}
		else if(ch==2)
		{
			printf("\nEnter a new team : ");
			scanf("%s",newteam);
			
			printf("New team added : %s",newteam);
		}
		else if(ch==3)
		{
			printf("Thank youu!");
			break;
		}
		else {
			printf("\nInvalid choice ");
		}
		
		
	}
}







