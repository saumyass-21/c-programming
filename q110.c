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
for(i=0; i<=n-k; i++)
    {
        int m = arr[i];
        for(j=1; j<k; j++)
            {
                if(arr[i+j] > m)
                    {
                        m = arr[i+j];
                    }
            }
        printf("%d", m);
        if(i < n-k)
            {
                printf(" ");
            }
    }
printf("\n");
return 0;
}
