#include <stdio.h>

int main() 
{
int n, i, j, distinct = 1;
int matrix[10][10], diag[10];
printf("Enter order of the square matrix: ");
scanf("%d", &n);
printf("Enter the elements of the matrix:\n");
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf("%d", &matrix[i][j]);
for (i = 0; i < n; i++)
diag[i] = matrix[i][i];
for (i = 0; i < n; i++) 
    {
        for (j = i+1; j < n; j++) 
        {
            if (diag[i] == diag[j]) 
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    if (distinct)
        printf("Diagonal elements are all distinct.\n");
    else
        printf("Diagonal elements are NOT all distinct.\n");
return 0;
}
