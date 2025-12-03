#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender gender;
};

int main()
{
char s[10];
struct Person p;
printf("Gender=");
scanf("%s", s);
if(s[0]=='M')
    {
        p.gender=MALE;
    }
else if(s[0]=='F')
    {
        p.gender=FEMALE;
    }
if(p.gender==MALE)
    {
        printf("Male\n");
    }
else
    {
        printf("Female\n");
    }
return 0;
}
