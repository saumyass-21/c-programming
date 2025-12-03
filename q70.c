#include <stdio.h>

int main() 
{
int arr[100], n, k, i;
int temp[100];
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter number of positions to rotate right: ");
scanf("%d", &k);
k = k % n;
for (i = 0; i < k; i++)
temp[i] = arr[n - k + i];
for (i = k; i < n; i++)
temp[i] = arr[i - k];
printf("Array after right rotation:\n");
for (i = 0; i < n; i++)
printf("%d ", temp[i]);
printf("\n");
return 0;
}
