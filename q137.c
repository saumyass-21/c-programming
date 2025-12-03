#include <stdio.h>

enum role { ADMIN, USER, GUEST };

int main()
{
char s[10];
int i;
printf("Enter role: ");
scanf("%s", s);
enum role r;
if(s[0]=='A') r=ADMIN;
else if(s[0]=='U') r=USER;
else if(s[0]=='G') r=GUEST;
if(r == ADMIN)
    {
        printf("Welcome Admin!\n");
    }
else if(r == USER)
    {
        printf("Welcome User!\n");
    }
else if(r == GUEST)
    {
        printf("Welcome Guest!\n");
    }
return 0;
}
