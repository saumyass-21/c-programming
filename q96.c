#include <stdio.h>

int main() 
{
char str[200];
int i = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while (str[i] != '\0') 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
i = 0;
while (str[i] != '\0') 
    {
        int start = i;
        while (str[i] == ' ') i++;
        start = i;
        while (str[i] != ' ' && str[i] != '\0') i++;
        int end = i - 1;
        while (start < end) 
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
printf("output: %s\n", str);
return 0;
}
