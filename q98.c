#include <stdio.h>

int main() 
{
char name[200];
int i = 0, len = 0;
printf("Enter full name: ");
fgets(name, sizeof(name), stdin);
while (name[len] != '\0') 
   {
        if (name[len] == '\n') 
        {
            name[len] = '\0';
            break;
        }
        len++;
    }
    i = 0;
    while (i < len) 
    {
        while (i < len && name[i] == ' ')
            i++;
        if (i >= len)
            break;
        int word_start = i;
        while (i < len && name[i] != ' ')
            i++;
        int word_end = i - 1;
        if (i == len) 
        {
            printf(" ");
            for (int k = word_start; k <= word_end; k++)
                printf("%c", name[k]);
        } else 
        {
            char ch = name[word_start];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            printf("%c. ", ch);
        }
    }
printf("\n");
return 0;
}
