#include <stdio.h>

enum traffic_light { RED, YELLOW, GREEN };

int main()
{
    for (int i = RED; i <= GREEN; i++)
    {
        if (i == RED) printf("RED=%d\n", i);
        else if (i == YELLOW) printf("YELLOW=%d\n", i);
        else if (i == GREEN) printf("GREEN=%d\n", i);
    }
    return 0;
}
