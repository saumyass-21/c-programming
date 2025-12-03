#include <stdio.h>

int main()
{
char str[100];
int i;
printf("Enter string: ");
fgets(str, sizeof(str), stdin);
for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='\n')
            {
                str[i]='\0';
                break;
            }
    }
if(str[0]>='a' && str[0]<='z')
    {
        str[0] -= 32;
    }
for(i=1; str[i]!='\0'; i++)
    {
        if(str[i-1]==' ' && str[i]>='a' && str[i]<='z')
            {
                str[i] -= 32;
            }
        else if(str[i]>='A' && str[i]<='Z')
            {
                str[i] += 32;
            }
    }
printf("%s\n", str);
return 0;
}
