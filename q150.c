#include <stdio.h>

struct Student
{
char name[50];
int roll;
int marks;
};

int main()
{
struct Student s;
struct Student *p=&s;
printf("Name:");
scanf("%s", p->name);
printf("Roll:");
scanf("%d", &p->roll);
printf("Marks:");
scanf("%d", &p->marks);
printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", p->name, p->roll, p->marks);
return 0;
}
