#include <stdio.h>

int main()
{
int arr[100];
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

int x = 0;
for(i=0; i<n; i++)
    {
        int y = x ^ arr[i];
        x = y;
    }
printf("%d\n", x);

return 0;
}
