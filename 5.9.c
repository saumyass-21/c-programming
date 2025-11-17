#include <stdio.h>

int main() 
{
float p, r, t, si, ci, a;
int i;
printf("Enter principal, rate of interest and time: ");
scanf("%f %f %f", &p, &r, &t);
si = (p * r * t) / 100;
a = 1 + r / 100;
float compound = 1;
for(i = 0; i < (int)t; i++) 
    {
    compound *= a;
    }
ci = p * compound - p;
printf("Simple Interest = %.2f\n", si);
printf("Compound Interest = %.2f\n", ci);
return 0;
}
