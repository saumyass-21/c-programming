#include <stdio.h>

int main() 
{
int n, num, first, last, digit = 0, power = 1, m;
printf("Enter a number: ");
scanf("%d", &n);
num = n;
last = num % 10;
while (num >= 10) 
    {
        num /= 10;
        power *= 10;
        digit++;
    }
first = num;
m = n % power;
m = m / 10;
int swap = last * power + m * 10 + first;
printf("After swapping: %d\n", swap);
return 0;
}
