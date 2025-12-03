#include <stdio.h>

struct Student
{
char name[50];
int roll;
int marks;
};

struct Student getTopStudent(struct Student s[], int n)
{
int i, max=0;
for(i=1; i<n; i++)
{
if(s[i].marks > s[max].marks)
{
max=i;
}
}
return s[max];
}

int main()
{
struct Student s[3], top;
int i;
for(i=0; i<3; i++)
{
printf("Name:");
scanf("%s", s[i].name);
printf("Roll:");
scanf("%d", &s[i].roll);
printf("Marks:");
scanf("%d", &s[i].marks);
}
top = getTopStudent(s, 3);
printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
return 0;
}
