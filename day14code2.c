#include <stdio.h>

int main() {
int n, i;
long long p = 1;
int e = 0;
printf("Enter the value of n: ");
scanf("%d", &n);
for (i = 2; i <= n; i += 2) 
   {
       p *= i;
       e = 1;
   }
   if (e)
       printf("Product of even numbers from 1 to %d = %lld\n", n, p);
   else
       printf("There are no even numbers in the given range.\n");
return 0;
}

