#include <stdio.h>

int main() {
int rows, cols;
printf("enter the number of rows: ");
scanf("%d", &rows);
printf("enter number of columns: ");
scanf("%d", &cols);
int matrix[100][100];
printf("Enter the matrix elements:\n");
for (int i=0;i<rows;i++)
for (int j=0;j<cols;j++)
scanf("%d", &matrix[i][j]);
for (int d = 0; d < rows + cols - 1; d++) 
    {
        int tmp[100], t = 0;
        for (int i = 0; i < rows; i++) 
        {
            int j = d - i;
            if (j >= 0 && j < cols)
                tmp[t++] = matrix[i][j];
        }
        if (d % 2 == 0)
            for (int i = t - 1; i >= 0; i--) printf("%d ", tmp[i]);
        else
            for (int i = 0; i < t; i++) printf("%d ", tmp[i]);
    }
printf("\n");
return 0;
}

