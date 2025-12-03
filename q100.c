#include <stdio.h>

int main() 
{
char str[100];
int i, j, k;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
    }
int len = 0;
while (str[len] != '\0') 
    {
        len++;
    }
printf("All substrings are:\n");
    for (i = 0; i < len; i++) 
    {
        for (j = i; j < len; j++) 
        {
            for (k = i; k <= j; k++) 
            {
                printf("%c", str[k]);
            }
            printf(",");
            printf("\n");
        }
    }
printf("\n");
return 0;
}
