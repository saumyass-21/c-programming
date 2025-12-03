#include <stdio.h>

int main() 
{
char str[200];
int i;
int s = 0, d = 0, sp = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch == ' ') 
        {
            s++;
        } 
            else if (ch >= '0' && ch <= '9') 
        {
            d++;
        } 
            else if (ch != '\n') 
        {
            sp++;
        }
    }
printf("Spaces: %d, ", s);
printf("Digits: %d, ", d);
printf("Special: %d\n ", sp);
return 0;
}
