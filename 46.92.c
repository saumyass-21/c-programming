#include <stdio.h>

int main() 
{
char str[200];
int freq[26] = {0};
int i;
char first = '\0';
printf("Enter a string (lowercase letters): ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') 
        {
            int idx = ch - 'a';
            freq[idx]++;
            if (freq[idx] == 2) 
            {
                first = ch;
                break;
            }
        }
    }
if (first != '\0')
     printf("First repeating lowercase alphabet: %c\n", first);
else
     printf("No repeating lowercase alphabet found.\n");
return 0;
}
