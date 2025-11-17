#include <stdio.h>

int main() 
{
int n, digit, p = 1;
int odd = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n != 0) 
   {
        digit = n % 10;
        if (digit % 2 != 0) 
        {
            p *= digit;
            odd = 1;
        }
        n /= 10;
    }

    if (!odd) 
    {
        p = 1;
    }
printf("Product of odd digits: %d\n", p);
return 0;
}
