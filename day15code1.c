#include <stdio.h>

int main() {
int n, i;
long f = 1;
printf("Enter a number: ");
scanf("%d", &n);
if (n < 0)
     printf("Error! Factorial of a negative number doesn't exist.\n");
else 
    {
      for (i = 1; i <= n; ++i) 
    {
          f *= i;
    }
          printf("Factorial of %d = %ld\n", n, f);
    }
return 0;
}
