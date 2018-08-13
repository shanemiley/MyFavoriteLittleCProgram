
#include <stdio.h>
int main()
{
    int tiers = 0;
    int spaces = 0;
    int levels = 0;
    int limit = 0;
    int stars = 0;
    printf("Enter number of tiers \n");
    scanf("%d", &limit);

    for (tiers = 1; tiers <= limit; tiers++) //fine
    {
        for (levels = 0; levels < tiers + 1; levels++)
        {
            for (spaces = limit; spaces > levels; spaces--)
            {
                printf(" ");
            }
            for (stars = 0; stars <= levels * 2; stars++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
