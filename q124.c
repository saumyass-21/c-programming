#include <stdio.h>

int main()
{
char s[100], d[100];
FILE *f1, *f2;
int c;
printf("Enter source filename: ");
scanf("%s", s);
printf("Enter destination filename: ");
scanf("%s", d);
f1 = fopen(s, "r");
if(f1 == NULL)
    {
        printf("Source file not found\n");
        return 1;
    }
f2 = fopen(d, "w");
if(f2 == NULL)
    {
        printf("Cannot create destination file\n");
        fclose(f1);
        return 1;
    }
while((c = fgetc(f1)) != EOF)
    {
        fputc(c, f2);
    }
fclose(f1);
fclose(f2);
printf("File copied successfully to %s\n", d);
return 0;
}
