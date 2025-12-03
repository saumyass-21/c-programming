#include <stdio.h>

enum op { ADD, SUBTRACT, MULTIPLY };

int main()
{
char s[10];
int a, b, c;
printf("Enter operation and two numbers: ");
scanf("%s %d %d", s, &a, &b);
c = -1;
if(s[0]=='A') c=ADD;
else if(s[0]=='S' && s[1]=='U') c=SUBTRACT;
else if(s[0]=='M') c=MULTIPLY;
if(c == -1)
    {
        printf("Invalid operation\n");
        return 1;
    }
switch(c)
    {
        case ADD:
            printf("%d\n", a+b);
            break;
        case SUBTRACT:
            printf("%d\n", a-b);
            break;
        case MULTIPLY:
            printf("%d\n", a*b);
            break;
    }
return 0;
}
