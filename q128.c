#include <stdio.h>

int main()
{
FILE *f;
char c;
int vowels = 0, conso = 0;
f = fopen("text.txt", "r");
if(f == NULL)
    {
        printf("File not found\n");
        return 1;
    }
while((c = fgetc(f)) != EOF)
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                char ch = c | 32;
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    {
                        vowels++;
                    }
                else
                    {
                        conso++;
                    }
            }
    }
fclose(f);
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", conso);
return 0;
}
