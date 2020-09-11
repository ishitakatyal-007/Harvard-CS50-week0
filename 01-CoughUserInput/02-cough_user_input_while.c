#include <stdio.h>

int main(void)
{
    int iter, i = 0;
    printf("Enter the number of times you wanna COUGH: ");
    scanf("%d", &iter);

    while(i < iter)
    {
        printf("Cough....");
        i++;
    }
}