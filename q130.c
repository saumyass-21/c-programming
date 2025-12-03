#include <stdio.h>

int main()
{
FILE *f;
char name[100];
int roll, marks;
int i;
printf("Enter number of students: ");
scanf("%d", &i);
f = fopen("students.txt", "w");
for(int j=0; j<i; j++)
    {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
fclose(f);

f = fopen("students.txt", "r");
printf("\n");
while(fscanf(f, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
fclose(f);
return 0;
}
