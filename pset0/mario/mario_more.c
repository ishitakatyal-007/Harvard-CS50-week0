//took the spaces between the pyramid to be 2
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height of the right-aligned pyramid:");
    }while(height<1 || height>8);

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<height-i-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<i+1; k++)
        {
            printf("#");
        }
        for(int l=0; l<2; l++)
        {
            printf("  ");
        }
        for(int m=0; m<i+1; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}