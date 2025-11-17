#include <stdio.h>

int main() 
{
int n1, n2, n3, b;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 >= n2) {
        if(n1 >= n3)
            b = n1;
        else
            b = n3;
    } 
        else 
    {
            if(n2 >= n3)
                b = n2;
        else
                b = n3;
    }
printf("The largest number is %d\n", b);
return 0;
}
