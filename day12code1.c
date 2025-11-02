#include <stdio.h>

int main() {
int dl;
printf("Enter the number of late days: ");
scanf("%d", &dl);
    if (dl > 30) {
      printf("Membership Cancelled.\n");
    } 
     else if (dl > 20) 
    {
       printf("Fine = 6 x %d = Rs %.2f\n", dl, dl * 6.0);
    } 
     else if (dl > 10) 
    {
       printf("Fine = 4 x %d = Rs %.2f\n", dl, dl * 4.0);
    } 
     else if (dl > 5) 
    {
       printf("Fine = 2 x %d = Rs %.2f\n", dl, dl * 2.0);
    } 
     else if (dl > 0) 
    {
       printf("Fine = 2 x %d = Rs %.2f\n", dl, dl * 2.0);
    }
     else 
    {
      printf("No fine.\n");
    }
return 0;
}
