#include <stdio.h>
int main(void)
{
    double miles=0.0;
    printf("enter miles");
    scanf("%lf",&miles);
    int yards = 385;
    double kilometers;

    kilometers = 1.609 * ( miles + yards / 1760.0);
    printf("\nThis many kilometers = %lf",kilometers);
    return 0;
}