#include <stdio.h>

int main()
{
int n;
printf("Enter n: ");
scanf("%d", &n);
int total = n * (n + 1) / 2;
int left = 0;
int x;
for(x=1; x<=n; x++)
    {
        int right = total - left - x;
        if(left == right)
            {
                printf("%d\n", x);
                return 0;
            }
        left += x;
    }
printf("-1\n");
return 0;
}
