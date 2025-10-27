#include <stdio.h>

int main() 
{
float cel, fahren;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    fahren = (cel * 1.8) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", fahren);
    return 0;
}

