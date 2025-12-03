#include <stdio.h>

int main()
{
FILE *f1, *f2;
char s[100];
int i;
f1 = fopen("input.txt", "r");
if(f1 == NULL)
    {
        printf("Input file not found\n");
        return 1;
    }
f2 = fopen("output.txt", "w");
if(f2 == NULL)
    {
        printf("Cannot create output file\n");
        fclose(f1);
        return 1;
    }
while(fgets(s, sizeof(s), f1))
    {
        for(i=0; s[i]!='\0'; i++)
            {
                if(s[i]>='a' && s[i]<='z')
                    {
                        s[i] -= 32;
                    }
            }
        fputs(s, f2);
    }
fclose(f1);
fclose(f2);
return 0;
}
