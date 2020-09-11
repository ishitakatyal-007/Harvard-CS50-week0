#include <stdio.h>

int main(void)
{
    int row, col;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the column: ");
    scanf("%d", &col);
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("|");
        }
        printf("\n");
    }
}