#include <stdio.h>

int main()
{
FILE *f;
char str[100];
printf("Enter filename: ");
scanf("%s", str);
f = fopen(str, "a");
if(f == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
printf("Enter text to append: ");
fgetc(stdin);
fgets(str, sizeof(str), stdin);
fprintf(f, "%s", str);
fclose(f);
printf("File updated successfully with appended text.\n");
return 0;
}
