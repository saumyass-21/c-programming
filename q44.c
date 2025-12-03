#include <stdio.h>

int main() 
{
int n, i;
float sum = 0.0;
int numer, denom;
printf("Enter the number of terms: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) 
   {
        numer = 2 * i - 1;
        if (i == 1) 
        {
            sum += 1;
        } else 
        {
            denom = 2 * i;
            sum += (float)numer / denom;
        }
    }
printf("%.2f\n", sum);
return 0;
}

