#include <stdio.h>

int main(void)
{
    int initial;
    printf("Enter the initial scaling: ");
    scanf("%d", &initial);

    while(initial < 101)
    {
        for(int i=0; i<initial; i++)
        {
            printf("|");
        }
        printf("\n");
        initial++;
    }
}