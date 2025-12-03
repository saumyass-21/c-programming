#include <stdio.h>

int main() 
{
char date[20];
char day[3], mon[3], year[5];
printf("Enter date in dd/04/yyyy format: ");
fgets(date, sizeof(date), stdin);
day[0] = date[0];
day[1] = date[1];
day[2] = '\0';
mon[0] = date[3];
mon[1] = date[4];
mon[2] = '\0';
int i = 6, y = 0;
while (date[i] != '\0' && date[i] != '\n' && y < 4) 
    {
        year[y++] = date[i++];
    }
year[y] = '\0';
char finalMonth[] = "Apr";
printf("%s-%s-%s\n", day, finalMonth, year);
return 0;
}
