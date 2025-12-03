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
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%d", &s.marks);
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
        return 0;
    }
