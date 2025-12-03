#include <stdio.h>

int main() 
{
char str[200], longest[200];
int i = 0, start = 0, len = 0;
int maxstart = 0, maxlen = 0;
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
while (1) 
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') 
        {
            if (len == 0) start = i;
            len++;
        } 
            else 
        {
            if (len > 0) 
            {
                if (len > maxlen) 
                {
                    maxlen = len;
                    maxstart = start;
                }
                len = 0;
            }
            if (str[i] == '\0') break;
        }
        i++;
    }
for (i = 0; i < maxlen; i++) 
    {
        longest[i] = str[maxstart + i];
    }
longest[maxlen] = '\0';
printf("Longest word: %s\n", longest);
return 0;
}
