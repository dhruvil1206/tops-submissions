#include <stdio.h>

char tasks[5][100];
int status[5] = {0, 0, 0, 0, 0};

void markTaskDone(int index)
{
    status[index] =1;
}

void main()
{
    int i,n;

    for(i=0;i<5;i++)
    {
        printf("Enter task %d: ", i+1);
        scanf(" %[^\n]", tasks[i]);
    }

    printf("\nEnter task number to mark as DONE (1-5): ");
    scanf("%d", &n);

    if(n>=1 && n<=5)
    {
        markTaskDone(n - 1);
    }
    else
    {
        printf("Invalid task number!\n");
    }

    printf("\nUpdated Task List:\n");

    for(i=0;i<5;i++)
    {
        if(status[i]==1)
        {
            printf("%d. %s - DONE\n",i+1, tasks[i]);
        }
        else
        {
            printf("%d. %s - PENDING\n",i+1, tasks[i]);
        }
    }
}

