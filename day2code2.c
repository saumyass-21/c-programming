#include <stdio.h>

int main() 
{
float r, a, c;
    float pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = pi * r * r;
    c = 2 * pi * r;
    printf("Area of the circle = %.2f\n", a);
    printf("Circumference of the circle = %.2f\n", c);
    return 0;
}
