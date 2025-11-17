#include <stdio.h>

int main() 
{
int n, o, temp, d = 0, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
  o = n;
  while (o != 0) 
{
     d++;
     o /= 10;
}
o = n;
while (o != 0) 
{
     int rem = o % 10;
     int power = 1;
     for (int i = 0; i < d; i++) {
         power *= rem;
     }
     sum += power;
     o /= 10;
}
if (sum == n)
     printf("%d is an Armstrong number.\n", n);
  else
     printf("%d is not an Armstrong number.\n", n);
return 0;
}
