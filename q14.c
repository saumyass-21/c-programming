#include <stdio.h>

int main() 
{
char ch;
int lc, uc;
printf("Enter a character: ");
scanf("%c", &ch);
lc = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
uc = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lc || uc)
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is a consonant.\n", ch);
return 0;
}

