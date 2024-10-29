 #include<stdio.h>
 #define Pi 3.14

 int main()
 {
    double area = 0.0, radius = 0.0;
    printf("Enter radius:");
    scanf("%lf", &radius);
    area = Pi * radius * radius;
    printf("radius of %lf meters; area is %lf sqmeters\n",radius,area);
    return 0;
 }