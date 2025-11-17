#include <stdio.h>

int main() 
{
int n;
float sum = 0.0;
printf("Enter the number of terms: ");
scanf("%d", &n);
sum += 1.0;
int num = 3, denom = 4;
for (int i = 2; i <= n; i++) 
    {
        sum += (float)num / denom;
        num += 2;
        denom += 2;
    }
printf("Sum of the series up to %d terms = %.4f\n", n, sum);
return 0;
}
