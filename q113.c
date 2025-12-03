#include <stdio.h>

void sort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    sort(arr, n);
    printf("%d\n", arr[k-1]);

    return 0;
}
