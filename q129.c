#include <stdio.h>

int main()
{
FILE *f;
int x, sum=0, count=0;
f = fopen("numbers.txt", "r");
if(f == NULL)
    {
        printf("File not found\n");
        return 1;
    }
while(fscanf(f, "%d", &x) == 1)
    {
        sum += x;
        count++;
    }
fclose(f);
printf("Sum = %d\n", sum);
printf("Average = %.2f\n", (float)sum/count);
return 0;
}
