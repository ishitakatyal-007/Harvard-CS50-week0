#include <stdio.h>

void cough(int count)
{
    for(int i=0; i<count; i++)
    {
        printf("Cough...\n");
    }
}

int main(void)
{
    int val;
    printf("Enter no. of times you wanna COUGH?\n");
    scanf("%d", &val);
    cough(val);
}