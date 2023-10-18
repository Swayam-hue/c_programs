#include <stdio.h>

int main()
{
    int a = 0;
    for (int i = 4; i>0; i--)
    {
        for (int j = i - 1; j>0; j--)
        {
            printf(" ");
        }
        a = a + 1;
        for (int m = 1; m >= a; m++)
        {
            printf ("* ");
        }
        printf("\n");
    }
}