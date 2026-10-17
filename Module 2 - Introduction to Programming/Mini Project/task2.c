#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int i, choice;

    while(1)
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<7;i++)
                {
                    printf("Enter minutes for day %d: ", i+1);
                    scanf("%d", &minutes[i]);
                }
                printf("Listening minutes logged successfully!\n");
                break;

            case 2:
                printf("\nWeekly Listening Summary:\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d = %d minutes\n",
                           i + 1, minutes[i]);
                }
                break;

            case 3:
                printf("Exiting Music Listening Logger.\n");
              {
              	printf("Thank you..");
              	return 0;
			  }
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

