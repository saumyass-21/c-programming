#include <stdio.h>

int main() 
{
float cp, sp, p, l, per;
printf("Enter cost price: ");
scanf("%f", &cp);
printf("Enter selling price: ");
scanf("%f", &sp);
    if (sp > cp) 
    {
      p = sp - cp;
      per = (p * 100) / cp;
      printf("Profit = %.2f\n", p);
      printf("Profit Percentage = %.2f%%\n", per);
    }
    else if (cp > sp) 
    {
      l = cp - sp;
      per = (l * 100) / cp;
      printf("Loss = %.2f\n", l);
      printf("Loss Percentage = %.2f%%\n", per);
    }
    else 
    {
      printf("No profit no loss.\n");
    }
return 0;
}
