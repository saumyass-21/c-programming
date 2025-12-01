#include <stdio.h>

int main() 
{
char s1[200], s2[200];
int freq1[256] = {0}, freq2[256] = {0};
int i, gram = 1;
printf("Enter first string: ");
fgets(s1, sizeof(s1), stdin);
printf("Enter second string: ");
fgets(s2, sizeof(s2), stdin);
for (i = 0; s1[i] != '\0'; i++) 
    {
        if (s1[i] != '\n')
            freq1[(unsigned char)s1[i]]++;
    }
for (i = 0; s2[i] != '\0'; i++) 
    {
        if (s2[i] != '\n')
            freq2[(unsigned char)s2[i]]++;
    }
for (i = 0; i < 256; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            gram = 0;
            break;
        }
    }
if (gram)
     printf("anagrams.\n");
else
     printf("not anagrams.\n");
return 0;
}
