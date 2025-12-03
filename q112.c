#include <stdio.h>

int main()
{
int arr[100];
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
int a = arr[0];
int b = 0;
for(i=0; i<n; i++)
    {
        b += arr[i];
        if(b > a)
            {
                a = b;
            }
        if(b < 0)
            {
                b = 0;
            }
    }
printf("%d\n", a);
return 0;
}
