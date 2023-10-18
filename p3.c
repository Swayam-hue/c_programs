#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 4; i > 0; i--)
    {
        for (int j = i;j > 0; j--)
        {
            if (j != 1)
            printf(" ");

            else
            break;
        }
        for (int b = 1; b <= a; b++)
        {
            printf("*");
        }
        a+=2;
        printf("\n");
    }
}