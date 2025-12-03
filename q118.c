#include <stdio.h>

int main()
{
int arr[100];
int n, i, sum=0, exp;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
exp = n * (n + 1) / 2;
printf("%d\n", exp - sum);
return 0;
}
