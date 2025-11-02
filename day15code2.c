#include <stdio.h>

int main() {
int n, r = 0, rem;
printf("Enter an integer: ");
scanf("%d", &n);
while (n != 0) 
    {
      rem = n % 10;
      r = r * 10 + rem;
      n /= 10;
    }
printf("Reversed Number = %d\n", r);
return 0;
}
