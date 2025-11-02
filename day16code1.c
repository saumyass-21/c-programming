#include <stdio.h>

int main() 
{
int n, rem, r = 0, b = 1;
printf("Enter a decimal number: ");
scanf("%d", &n);
while (n > 0) 
{
       rem = n % 2;
       printf("%d", rem);
       n /= 2;        
    }
printf("\n");
return 0;
}
