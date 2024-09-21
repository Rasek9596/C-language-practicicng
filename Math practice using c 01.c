#include<stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y; //the value which will be processes.

    printf("Inter the value of x + y: ");
    scanf("%lf", &x_plus_y);  //the value of x + y; to be further process.

    printf("Inter the value of x - y: ");
    scanf("%lf", &x_minus_y);  //the value of x - y; to be further process.

    x = (x_plus_y + x_minus_y)/2;  //from the rule of math.
    y = (x_plus_y - x_minus_y)/2;  //from the rule of math.

    printf("X = %0.02lf, y = %0.02lf\n", x, y);   //final result up to 2 decimal numbers.
    return 0;
}