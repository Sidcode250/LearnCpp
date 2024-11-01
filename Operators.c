#include<stdio.h>
int main()
{
    int a = 5, b = 7, c = 0, d = 0, e = 5;
    c = ++a, d = b++, e += 5;
    printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
    return 0;   
}