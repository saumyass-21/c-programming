#include <stdio.h>

int main()
{
FILE *f;
char s[100];
int c=0, w=0, l=0, i;
f = fopen("info.txt", "r");
if(f == NULL)
    {
        printf("File not found\n");
        return 1;
    }
while(fgets(s, sizeof(s), f))
    {
        l++;
        c += i;
        for(i=0; s[i]!='\0'; i++)
            {
                c++;
                if(s[i]!=' ' && (i==0 || s[i-1]==' '))
                    {
                        w++;
                    }
            }
    }
printf("Characters: %d\n", c);
printf("Words: %d\n", w);
printf("Lines: %d\n", l);
fclose(f);
return 0;
}
