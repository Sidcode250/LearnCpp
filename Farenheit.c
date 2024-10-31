#include<stdio.h>
int main(void)
{
    int farenheit, celcius;
    printf("Enter farenheit");
    scanf("%d",&farenheit);
    celcius = (farenheit-32)/1.8;
    printf("%d farenheit is \n%d celcius,\n",farenheit, celcius);
    return 0;
}