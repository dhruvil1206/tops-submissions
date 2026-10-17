#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense e[10];
    int choice, i, count = 0;
    float total;
    FILE *fp;

    do
    {
        printf("\n\n--- Personal Expense Logger ---\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (count < 10)
                {
                    printf("Enter category: ");
                    scanf(" %29[^\n]", e[count].category);

                    printf("Enter amount: ");
                    scanf("%f", &e[count].amount);

                    if (e[count].amount < 0)
                    {
                        printf("Invalid amount!\n");
                    }
                    else
                    {
                        count++;
                        printf("Expense added successfully!\n");
                    }
                }
                else
                {
                    printf("Expense limit reached! Maximum 10 entries.\n");
                }
                break;

            case 2:
                total = 0;

                printf("\n--- All Expenses ---\n");
                printf("%-20s %-10s\n", "Category", "Amount");
                printf("--------------------------------\n");

                for (i = 0; i < count; i++)
                {
                    printf("%-20s Rs %.2f\n",
                           e[i].category, e[i].amount);

                    total = total + e[i].amount;
                }

                printf("--------------------------------\n");
                printf("Total Expense: Rs %.2f\n", total);
                break;

            case 3:
                fp = fopen("expenses.txt", "w");

                if (fp == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                for (i = 0; i < count; i++)
                {
                    fprintf(fp, "%s,%.2f\n",
                            e[i].category, e[i].amount);
                }

                fclose(fp);

                printf("Expenses saved to expenses.txt\n");
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

}

