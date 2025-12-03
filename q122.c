#include <stdio.h>

int main()
{
FILE *f;
char s[100];
f = fopen("info.txt", "r");
if(f == NULL)
    {
        printf("File not found\n");
        return 1;
    }
while(fgets(s, sizeof(s), f))
    {
        printf("%s", s);
    }
fclose(f);
return 0;
}
