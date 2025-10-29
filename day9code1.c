#include <stdio.h>
#include <math.h>

int main() 
{
float a, b, c, d, r1, r2, rl, im;
printf("Enter coefficients a, b, and c: ");
scanf("%f %f %f", &a, &b, &c);
d = b*b - 4*a*c;
    if(d > 0) 
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\nR1 = %.2f\nR2 = %.2f\n", r1, r2);
    }
    else if(d == 0) 
    {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal.\nR = %.2f\n", r1);
    }
    else 
    {
        rl = -b / (2*a);
        im = sqrt(-d / (2*a);
        printf("Roots are complex and different.\nR1 = %.2f + %.2fi\nR2 = %.2f - %.2fi\n", rl, im, rl, im);
    }
return 0;
}
