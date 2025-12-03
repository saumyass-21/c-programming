#include <stdio.h>

int main() 
{
char str[100];
int i, v = 0, c = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }
printf("Vowels: %d\n", v);
printf("Consonants: %d\n", c);
return 0;
}
