#include <stdio.h>

int main() 
{
int n, i, j, p;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Prime numbers from 1 to %d are:\n", n);
for (i = 2; i <= n; i++) 
    {
        p = 1;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                p = 0;
                break;
            }
        }
        if (p == 1) 
        {
            printf("%d\n", i);
        }
    }
return 0;
}
