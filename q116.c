#include <stdio.h>

int main()
{
int nums[100];
int n, t, i, j;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
printf("Enter target: ");
scanf("%d", &t);
for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
            {
                if(nums[i] + nums[j] == t)
                    {
                        printf("%d %d\n", i, j);
                        return 0;
                    }
            }
    }
printf("-1 -1\n");
return 0;
}
