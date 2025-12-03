#include <stdio.h>

struct Date
{
int day;
int month;
int year;
};

struct Employee
{
char name[50];
int id;
struct Date joinDate;
};

int main()
{
struct Employee e;
printf("Employee: ");
scanf("%s", e.name);
printf("ID: ");
scanf("%d", &e.id);
printf("Joining Date: ");
scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);
printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);
return 0;
}
