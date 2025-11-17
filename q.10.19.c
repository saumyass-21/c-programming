#include <stdio.h>

int main() 
{
float a, b, c;
printf("Enter the lengths of the three sides of the triangle: ");
scanf("%f %f %f", &a, &b, &c);
    if(a == b && b == c)
        printf("the triangle is equilateral.\n");
    else if(a == b || b == c || a == c)
        printf("the triangle is isosceles.\n");
    else
        printf("the triangle is scalene.\n");
return 0;
}
