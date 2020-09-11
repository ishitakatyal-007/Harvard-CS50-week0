#include <stdio.h>

void cough(); //prototype

int main(void)
{
    for(int i=0; i<3; i++)
    {
        cough();
    }
}

void cough()
{
    printf("Cough...\n");
}
