#include <stdio.h>

int main() 
{
int i;
printf("Enter number of groups: ");
int groups;
scanf("%d", &groups);
for (i = 1; i <= groups; i++) 
    {
        int lines;
        if (i == 1) lines = 4;
        else if (i == 2) lines = 5;
        else if (i == 3) lines = 3;
        else if (i == 4) lines = 1;
        else lines = 0;
        for (int j = 0; j < lines; j++) 
        {
            printf("*\n\n");
        }
        printf("\n");
    }
return 0;
}
