#include <stdio.h>

int main()
{
int nums[100];
int n, i, j;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
int left[100];
int right[100];
left[0] = 1;
for(i=1; i<n; i++)
    {
        left[i] = left[i-1] * nums[i-1];
    }
right[n-1] = 1;
for(i=n-2; i>=0; i--)
    {
        right[i] = right[i+1] * nums[i+1];
    }
for(i=0; i<n; i++)
    {
        printf("%d", left[i] * right[i]);
        if(i < n-1)
            {
                printf(", ");
            }
    }
printf("\n");
return 0;
}
