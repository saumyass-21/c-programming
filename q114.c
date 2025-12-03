#include <stdio.h>

int main()
{
char s[100];
int i, j, k, m;
printf("Enter string: ");
fgets(s, sizeof(s), stdin);
for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='\n')
            {
                s[i]='\0';
                break;
            }
    }
int len=0;
while(s[len]!='\0')
    {
        len++;
    }
int a=0, b=0;
for(i=0; i<len; i++)
    {
        int c[256]={0};
        for(j=i; j<len; j++)
            {
                c[s[j]]++;
                if(c[s[j]]>1)
                    {
                        break;
                    }
                if(j-i+1 > a)
                    {
                        a = j-i+1;
                        b = i;
                    }
            }
    }
printf("%d\n", a);
return 0;
}
