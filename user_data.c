/// created by ccoman in 5.12.2019
#include <stdio.h>

void inputLogin(char username[], char password[], int *state)
{
    printf("Please sign in to continue!\n");
    printf("---Username\n");
    gets(username);
    printf("---Password\n");
    gets(password);
    *state = *state+1;
}