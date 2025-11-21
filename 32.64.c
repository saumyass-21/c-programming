#include <stdio.h>

int main() 
{
int num, digit, freq[10] = {0}, max = 0, mostfreq = 0;
printf("Enter an integer number: ");
scanf("%d", &num);
if (num < 0) num = -num;
    while (num > 0) 
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
for (int i = 0; i < 10; i++) 
    {
        if (freq[i] > max) 
        {
            max = freq[i];
            mostfreq = i;
        }
    }
printf("The digit that occurs most frequently is: %d\n", mostfreq);
return 0;
}
