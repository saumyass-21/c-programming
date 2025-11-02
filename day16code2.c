#include <stdio.h>

int main() 
{
int n, op, r = 0, rem;
printf("Enter a number: ");
scanf("%d", &n);
op = n;
while (n != 0) 
    {
       rem = n % 10;
       r = r * 10 + rem;
       n /= 10;
    }
     if (op == r)
       printf("%d is a palindrome number.\n", op);
     else
printf("%d is not a palindrome number.\n", op);
return 0;
}
