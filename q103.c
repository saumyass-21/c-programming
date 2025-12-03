#include <stdio.h>

int main()
{
int nums[100];
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
int total = 0;
for(i=0; i<n; i++)
    {
        total += nums[i];
    }
int left = 0;
for(i=0; i<n; i++)
    {
        int right = total - left - nums[i];
        if(left == right)
            {
                printf("%d\n", i);
                return 0;
            }
        left += nums[i];
    }
printf("-1\n");
return 0;
}
