#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main()
{
    enum status s = FAILURE;
    if(s == SUCCESS)
    {
        printf("Operation successful\n");
    }
    else if(s == FAILURE)
    {
        printf("Operation failed\n");
    }
    else if(s == TIMEOUT)
    {
        printf("Operation timed out\n");
    }
    return 0;
}
