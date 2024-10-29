#include <stdio.h>
int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * ( miles + yards / 1760.0);
    printf("\nThis many kilometers = %lf",kilometers);
    return 0;
}