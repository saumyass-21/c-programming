#include <stdio.h>

enum month { JAN=31, FEB=28, MAR=31, APR=30, MAY=31, JUN=30, JUL=31, AUG=31, SEP=30, OCT=31, NOV=30, DEC=31 };

int main()
{
char s[10];
int i;
printf("Enter month: ");
scanf("%s", s);
if(s[0]=='F' || s[0]=='f')
    {
        printf("28 or 29 days\n");
    }
else
    {
        enum month m;
        for(i=0; s[i]!='\0'; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    {
                        s[i] += 32;
                    }
            }
        if(s[0]=='j' && s[2]=='n') m=JAN;
        else if(s[0]=='m' && s[2]=='r') m=MAR;
        else if(s[0]=='a' && s[1]=='p') m=APR;
        else if(s[0]=='m' && s[1]=='a') m=MAY;
        else if(s[0]=='j' && s[1]=='u' && s[2]=='n') m=JUN;
        else if(s[0]=='j' && s[1]=='u' && s[2]=='l') m=JUL;
        else if(s[0]=='a' && s[1]=='u') m=AUG;
        else if(s[0]=='s' && s[1]=='e') m=SEP;
        else if(s[0]=='o' && s[1]=='c') m=OCT;
        else if(s[0]=='n') m=NOV;
        else if(s[0]=='d') m=DEC;
        printf("%d days\n", m);
    }
return 0;
}
