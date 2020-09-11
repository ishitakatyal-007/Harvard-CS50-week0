#include <stdio.h>

int main(void)
{
    int iter;
    printf("Enter the number of times you wanna COUGH: ");
    scanf("%d", &iter);

    for(int i=0; i<iter; i++)
    {
        printf("Cough....");
    }
}