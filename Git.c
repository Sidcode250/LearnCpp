#include<stdio.h>
int main()
{
    int repeat = 0;
    printf("Enter:");
    scanf("%d", &repeat);
    printf("I Love you very");
    while (repeat > 0)
    {
        printf(" very");
        repeat--;
    }
    printf(" much");
    return 0;
}