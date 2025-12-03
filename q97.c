#include <stdio.h>

int main() 
{
    char name[100];
    int i;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    for (i = 0; name[i] != '\0'; i++) 
    {
        if (name[i] != ' ' && name[i] != '\n') 
        {
            if (name[i] >= 'a' && name[i] <= 'z') 
            {
                printf("%c\n", name[i] - 32);
            } else {
                printf("%c\n", name[i]);
            }
            break;
        }
    }
return 0;
}
