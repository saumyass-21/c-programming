#include <stdio.h>

int main()
{
int nums[100];
int n, t;
int i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter sorted array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
printf("Enter target: ");
scanf("%d", &t);
int first = -1;
int last = -1;
for(i=0; i<n; i++)
    {
        if(nums[i] == t)
            {
                if(first == -1)
                    {
                        first = i;
                    }
                last = i;
            }
    }
printf("%d,%d\n", first, last);
return 0;
}
