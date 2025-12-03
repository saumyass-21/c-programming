#include <stdio.h>

struct Student
{
char name[50];
int roll;
int marks;
};

int main()
{
struct Student s1, s2;
int same=1;

printf("Student1: ");
scanf("%s%d%d", s1.name, &s1.roll, &s1.marks);
printf("Student2: ");
scanf("%s%d%d", s2.name, &s2.roll, &s2.marks);

if(s1.roll != s2.roll || s1.marks != s2.marks)
{
    same=0;
}
else
{
    int i;
    for(i=0; s1.name[i]!='\0' && s2.name[i]!='\0'; i++)
    {
        if(s1.name[i] != s2.name[i])
        {
            same=0;
            break;
        }
    }
    if(s1.name[i] != s2.name[i]) // check if lengths differ
    {
        same=0;
    }
}

if(same)
{
    printf("Same\n");
}
else
{
    printf("Not Same\n");
}
return 0;
}

