#include <stdio.h>

int main() {
int i, j, k;
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) 
    {
        for (k = 1; k <= n - i; k++) 
        {
            printf(" ");
        }
        for (j = n - i + 1; j <= n; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
return 0;
}
