#include <stdio.h>

int main() 
{
int n, i;
float sum = 0.0;
int numer = 2;
int denom = 3;
printf("Enter the number of terms: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) 
    {
        sum += (float)numer / denom;
        numer += 2;
        denom += 4;
    }
printf("%.2f\n", sum);
return 0;
}
