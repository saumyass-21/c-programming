#include <stdio.h>

int main() {
int n, i, sod = 0, c = 1;
printf("Enter the value of n: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) 
    {
       sod += c;
       c += 2;
    }
printf("Sum of first %d odd numbers = %d\n", n, sod);
return 0;
}
