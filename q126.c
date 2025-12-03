#include <stdio.h>

int main()
{
char f[100];
FILE *p;
char s[100];
printf("Enter filename: ");
scanf("%s", f);
p = fopen(f, "r");
if(p == NULL)
    {
        printf("File not found\n");
        return 1;
    }
printf("File opened successfully.\n");
while(fgets(s, sizeof(s), p))
    {
        printf("%s", s);
    }
fclose(p);
return 0;
}
