#include <stdio.h>

int PositiveNum(void)
{
    int num;
    printf("Enter a non-zero positive number:\n");
    do
    {
        scanf("%d", &num);
    } while (num < 1);
    return num;
}

int main(void)
{
    int n = PositiveNum();
    printf("This time you entered correctly....%d.", n);
}

