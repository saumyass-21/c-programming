#include <stdio.h>

int main() 
{
int n1, n2, r;
char op;
printf("Enter input (num1 num2 operator): ");
scanf("%d %d %c", &n1, &n2, &op);
switch(op) 
      {
        case '+':
          r = n1 + n2;
          printf("%d\n", r);
          break;
       case '-':
          r = n1 - n2;
          printf("%d\n", r);
          break;
      case '*':
          r = n1 * n2;
          printf("%d\n", r);
          break;
      case '/':
          if (n2 != 0)
              printf("%d\n", n1 / n2);
          else
              printf("Error: Division by zero\n");
          break;
        case '%':
          if (n2 != 0)
              printf("%d\n", n1 % n2);
          else
              printf("Error: Division by zero\n");
          break;
      default:
          printf("Invalid operator\n");
    }
return 0;
}
