#include <stdio.h>

int main() 
{
int p;
 char g;
printf("Enter percentage (0-100): ");
scanf("%d", &p);
    if (p >= 90 && p <= 100)
        g = 'A';
    else if (p >= 80 && p <= 89)
        g = 'B';
    else if (p >= 70 && p <= 79)
        g = 'C';
    else if (p >= 60 && p <= 69)
        g = 'D';
    else if (p < 60 && p >= 0)
        g = 'F';
    else 
    {
     printf("Invalid percentage entered.\n");
     return 1; // error exit
    }
printf("Grade = %c\n", g);
return 0;
}
