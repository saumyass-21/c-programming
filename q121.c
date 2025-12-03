#include <stdio.h>

int main()
{
char name[100];
int age;
FILE *fptr;
printf("Enter name: ");
fgets(name, sizeof(name), stdin);
for(int i = 0; name[i] != '\0'; i++)
{
    if(name[i] == '\n')
    {
        name[i] = '\0';
        break;
    }
}
printf("Enter age: ");
scanf("%d", &age);
fptr = fopen("info.txt", "w");
if(fptr == NULL)
{
    printf("Error opening file!\n");
    return 1;
}
fprintf(fptr, "Name: %s Age: %d\n", name, age);
fclose(fptr);
printf("File created successfully! Data written to info.txt\n");
return 0;
}
