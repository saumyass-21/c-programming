#include <stdio.h>

int main()
{
int num[100];
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
int major = -1;
int count = 0;
for(i=0; i<n; i++)
    {
        if(count == 0)
            {
                major = num[i];
                count = 1;
            }
        else if(num[i] == major)
            {
                count++;
            }
        else
            {
                count--;
            }
    }
count = 0;
for(i=0; i<n; i++)
    {
        if(num[i] == major)
            {
                count++;
            }
    }
if(count > n/2)
    {
        printf("%d\n", major);
    }
else
    {
        printf("-1\n");
    }
return 0;
}
