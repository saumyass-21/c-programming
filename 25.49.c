#include <stdio.h>

int main() 
{
int i, j, b;
int n;
printf("enter the number of rows: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) 
    {
        b = n - i + 1;
        for (j = b; j <= n; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
return 0;
}
