#include <stdio.h>

int main() 
{
    int num1, num2;
    int sum, difference, product;
    float quotient;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);
    return 0;
}
