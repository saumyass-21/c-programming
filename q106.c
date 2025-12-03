#include <stdio.h>

int main()
{
int arr[100];
int n, i, j;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

for(i=0; i<n; i++)
    {
        int k = -1;
        for(j=i+1; j<n; j++)
            {
                if(arr[j] > arr[i])
                    {
                        k = arr[j];
                        break;
                    }
            }
        printf("%d", k);
        if(i < n-1)
            {
                printf(", ");
            }
    }
printf("\n");
return 0;
}
