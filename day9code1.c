#include <stdio.h>

float mysqrt(float n)
{
float x = n;
float y = 1;
float e = 0.00001; // error tolerance
while (x - y > e || y - x > e) {
x = (x + y) / 2;
y = n / x;
    }
    return x;
}

int main()
{
float a, b, c, d, r1, r2, rl, img;
printf("Enter coefficients a, b, and c: ");
scanf("%f %f %f", &a, &b, &c);
d = b*b - 4*a*c;
if(d > 0)
     {
     r1 = (-b + mysqrt(d)) / (2*a);
     r2 = (-b - mysqrt(d)) / (2*a);
     printf("Roots are real and different.\nroot1 = %.2f\nroot2 = %.2f\n", r1, r2);
    }
    else if(d == 0)
    {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal.\nroot = %.2f\n", r1);
    }
    else
    {
    rl = -b / (2*a);
    img = mysqrt(-d) / (2*a);
        printf("Roots are complex and different.\nroot1 = %.2f + %.2fi\nroot2 = %.2f - %.2fi\n", rl, img, rl, img);
    }
return 0;
}
