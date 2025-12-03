#include <stdio.h>

struct Student
{
char name[50];
int roll;
int marks;
};

int main()
{
struct Student s[3];
int i,max;
for(i=0;i<3;i++)
{
printf("Name:");
scanf("%s", s[i].name);
printf("Roll:");
scanf("%d", &s[i].roll);
printf("Marks:");
scanf("%d", &s[i].marks);
}
max=0;
for(i=1;i<3;i++)
{
if(s[i].marks > s[max].marks)
{
max=i;
}
}
printf("Topper: %s (Marks: %d)\n", s[max].name, s[max].marks);
return 0;
}
