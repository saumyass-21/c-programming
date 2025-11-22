#include <stdio.h>

int main() 
{
int n, i, num, pos = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[100];
printf("Enter %d sorted elements:\n", n);
for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
printf("Enter element to be inserted: ");
scanf("%d", &num);
while (pos < n && arr[pos] < num) 
    {
        pos++;
    }
for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
arr[pos] = num;
n++;
printf("Array after insertion:\n");
for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
printf("\n");
return 0;
}

