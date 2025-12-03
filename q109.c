#include <stdio.h>

int main()
{
int arr[100];
int n, k, i, j;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("Enter k: ");
scanf("%d", &k);
int maxsum = 0;
for(i=0; i<=n-k; i++)
    {
        int sum = 0;
        for(j=0; j<k; j++)
            {
                sum += arr[i+j];
            }
        if(i == 0 || sum > maxsum)
            {
                maxsum = sum;
            }
    }
printf("%d\n", maxsum);
return 0;
}
