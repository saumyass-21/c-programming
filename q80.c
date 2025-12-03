#include <stdio.h>

int main() 
{
int r1, c1, r2, c2, i, j, k;
int a[10][10], b[10][10], result[10][10];
printf("Enter row for the first matrix: ");
scanf("%d", &r1);
printf("Enter column for the first matrix: ");
scanf("%d", &c1);
printf("Enter row for the second matrix: ");
scanf("%d", &r2);
printf("Enter column for the second matrix: ");
scanf("%d", &c2);
if (c1 != r2) 
    {
        printf("Error! Number of columns in first matrix must equal number of rows in second.\n");
        return 1;
    }
printf("Enter elements of first matrix:\n");
for (i = 0; i < r1; i++)
for (j = 0; j < c1; j++)
scanf("%d", &a[i][j]);
printf("Enter elements of second matrix:\n");
for (i = 0; i < r2; i++)
for (j = 0; j < c2; j++)
scanf("%d", &b[i][j]);
for (i = 0; i < r1; i++)
for (j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
printf("Resultant matrix:\n");
for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
return 0;
}
