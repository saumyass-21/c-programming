#include <stdio.h>

int main() 
{
char str[100];
int i, j, palin = 1;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (j = 0; str[j] != '\0'; j++);
j--;
if (str[j] == '\n')
j--;
for (i = 0; i < j; i++, j--) 
    {
    if (str[i] != str[j]) 
        {
            palin = 0;
            break;
        }
    }
if (palin)
   printf("The string is a palindrome.\n");
else
   printf("The string is not a palindrome.\n");
return 0;
}
