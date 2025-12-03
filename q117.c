#include <stdio.h>

int main()
{
int arr1[100], arr2[100], arr3[200];
int m, n, i=0, j=0, k=0;
printf("Enter size of first array: ");
scanf("%d", &m);
printf("Enter sorted elements of first array: ");
for(i=0; i<m; i++)
    {
        scanf("%d", &arr1[i]);
    }
printf("Enter size of second array: ");
scanf("%d", &n);
printf("Enter sorted elements of second array: ");
for(j=0; j<n; j++)
    {
        scanf("%d", &arr2[j]);
    }
i = 0; j = 0; k = 0;
while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
            {
                arr3[k++] = arr1[i++];
            }
        else
            {
                arr3[k++] = arr2[j++];
            }
    }
while(i < m)
    {
        arr3[k++] = arr1[i++];
    }
while(j < n)
    {
        arr3[k++] = arr2[j++];
    }
for(i=0; i<k; i++)
    {
        printf("%d", arr3[i]);
        if(i != k-1)
            {
                printf(" ");
            }
    }
printf("\n");
return 0;
}
