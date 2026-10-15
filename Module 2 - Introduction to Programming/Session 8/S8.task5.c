#include <stdio.h>

	void cap(char str[])
{
    str[0] = toupper(str[0]);
}

int main()
{
    char product[] = "mobile";
    char username[] = "dhruvil";

    cap(product);
    cap(username);

    printf("Product Name: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}

