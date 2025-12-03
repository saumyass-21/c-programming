#include <stdio.h>

int main() 
{
int rows, cols, i, j;
int matrix[10][10], rowSum[10];
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &cols);
printf("Enter the elements of the matrix:\n");
for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
for (i = 0; i < rows; i++) 
    {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) 
        {
            rowSum[i] += matrix[i][j];
        }
    }
printf("Row sums:\n");
for (i = 0; i < rows; i++) 
    {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }
return 0;
}
