#include <stdio.h>

int main()
{
int arr[100];
int n, x;
int i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter sorted array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("Enter x: ");
scanf("%d", &x);
int low = 0, high = n - 1;
int ceil = -1;
while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
            {
                ceil = mid;
                high = mid - 1;
            }
        else
            {
                low = mid + 1;
            }
    }
printf("%d\n", ceil);
return 0;
}
