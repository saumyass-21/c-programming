#include <stdio.h>

enum light { RED, YELLOW, GREEN };

int main()
{
    enum light l = GREEN;
    if (l == RED)
    {
        printf("Stop\n");
    }
    else if (l == YELLOW)
    {
        printf("Wait\n");
    }
    else if (l == GREEN)
    {
        printf("Go\n");
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
