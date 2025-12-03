#include <stdio.h>

struct Employee
{
char name[50];
int id;
struct Date
{
int day;
int month;
int year;
} joinDate;
};

int main()
{
struct Employee e;
FILE *f;
printf("Name:");
scanf("%s", e.name);
printf("ID:");
scanf("%d", &e.id);
printf("Joining Date (day month year):");
scanf("%d%d%d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

f = fopen("employee.dat", "wb");
fwrite(&e, sizeof(e), 1, f);
fclose(f);

f = fopen("employee.dat", "rb");
fread(&e, sizeof(e), 1, f);
fclose(f);

printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);
return 0;
}
