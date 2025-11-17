#include <stdio.h>

int main() 
{
char bit;
printf("Enter binary number (end input with any non-binary character): ");
while (1) 
    {
        bit = getchar();
        if (bit != '0' && bit != '1') 
        {
            break;
        }
        if (bit == '0') 
        {
            putchar('1');
        } else 
        {
            putchar('0');
        }
    }
    putchar('\n');
    return 0;
}
